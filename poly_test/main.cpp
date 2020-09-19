#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace std;
using namespace cv;


int main() {
    Mat src = Mat::zeros(400,400,CV_8UC1);
    vector<Point2f> vect(4);
    vect[0] = Point(100,100);
    vect[1] = Point(300,100);
    vect[2] = Point(300,300);
    vect[3] = Point(100,300);
    for(int i=0;i<vect.size();i++){
        line(src,vect[i],vect[(i+1)%4],Scalar(255,0,0),2,LINE_AA,0);
    }
    imshow("src",src);
//    寻找轮廓
    Mat dst;
    src.copyTo(dst);
    vector<vector<Point>> contour;
    vector<Vec4i> hierarchy;
    findContours(dst,contour,hierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));
    for(size_t i=0;i<contour.size();i++){
        drawContours(dst,contour,i,Scalar(0,0,255),2,LINE_AA,hierarchy);
    }
    imshow("output",dst);
//  计算点是否在内
    Mat test = Mat::zeros(400,400,CV_32FC1);
    for (int i=0;i<test.cols;i++){
        for (int j=0;j<test.rows;j++){
            double dist = pointPolygonTest(contour[0],Point(static_cast<float>(i), static_cast<float>(j)), true);
            test.at<float>(j,i) = static_cast<float>(dist);
        }
    }
    double max_value;
    double min_value;
    minMaxLoc(test,&min_value,&max_value,0,0,Mat());
//    根据点来绘制图像
    Mat final_img = Mat::zeros(400,400,CV_8UC3);
    for(int i=0;i<test.cols;i++){
        for (int j=0;j<test.rows;j++){
            if (test.at<float>(j,i) >0){
                final_img.at<Vec3b>(j,i)[0] = (uchar)(255*(abs(1.0 - test.at<float>(j,i)/max_value)));
            } else if (test.at<float>(j,i) <0){
                final_img.at<Vec3b>(j,i)[1] = (uchar)(255*(abs(1.0 - test.at<float>(j,i)/min_value)));
            } else{
                final_img.at<Vec3b>(j,i)[0] = (uchar)(255-test.at<float>(j,i));
                final_img.at<Vec3b>(j,i)[1] = (uchar)(255-test.at<float>(j,i));
                final_img.at<Vec3b>(j,i)[2] = (uchar)(255-test.at<float>(j,i));
            }
        }
    }
    imshow("final+img",final_img);

    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
