#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <vector>
using namespace std;
using namespace cv;

int main() {
    Mat src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    imshow("src",src);
    Mat dst;
    dst.create(src.size(),src.type());
//    因为数组的最后一位无值
    for (int row=0;row<src.rows;row++){
        for (int col=0;col<src.cols;col++){
            dst.at<Vec3b>(row,col)[0] = src.at<Vec3b>(src.rows-row-1,src.cols-1-col)[0];
            dst.at<Vec3b>(row,col)[1] = src.at<Vec3b>(src.rows-row-1,src.cols-1-col)[1];
            dst.at<Vec3b>(row,col)[2] = src.at<Vec3b>(src.rows-row-1,src.cols-1-col)[2];
        }
    }
    imshow("dst",dst);
//      两者均做平滑，但方式不一样，使其尺度不一样，看orb是否仍然鲁邦
    Mat  src_blur,dst_blur;
    blur(src,src_blur,Size (3,3),Point(-1,-1));
    GaussianBlur(dst,dst_blur,Size(3,3),0,0,BORDER_DEFAULT);

//    转为灰度图
    cvtColor(src_blur,src_blur,CV_BGR2GRAY);
    cvtColor(dst_blur,dst_blur,CV_BGR2GRAY);

    Ptr<ORB> orb = ORB::create();
    vector<KeyPoint> keypoints1,keypoints2;

    Mat descriptors1,descriptors2;
    orb->detectAndCompute(src_blur,Mat(),keypoints1,descriptors1);
    orb->detectAndCompute(dst_blur,Mat(),keypoints2,descriptors2);

    Mat ShowKeypoints1,ShowKeypoints2;
    drawKeypoints(src_blur,keypoints1,ShowKeypoints1);
    drawKeypoints(dst_blur,keypoints2,ShowKeypoints2);
    imshow("keypoint1",ShowKeypoints1);
    imshow("keypoint2",ShowKeypoints2);
    imshow("dst_blur",dst_blur);
    imshow("src_blur",src_blur);

//    匹配关键点
    vector<DMatch> matches;
//    暴力匹配
    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("BruteForce");
    matcher->match(descriptors1,descriptors2,matches);

//    对match进行处理
    nth_element(matches.begin(),matches.begin()+2,matches.end());
    matches.erase(matches.begin()+30,matches.end());

//    对匹配结果进行可视化
    Mat ShowMatches;
    Mat final_img;
    drawMatches(src_blur,keypoints1,dst_blur,keypoints2,matches,final_img);
    imshow("final_img",final_img);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
