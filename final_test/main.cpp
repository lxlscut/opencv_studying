#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat src,dst;

int main() {
    src = imread("C:\\Users\\PC\\Pictures\\poker.jpg");
    imshow("src0",src);

//    将图片转换为黑底
    for (int col=0;col<src.cols;col++){
        for(int row=0;row<src.rows;row++){
            if(src.at<Vec3b>(col,row)[0]>240 && src.at<Vec3b>(col,row)[1]>240&&src.at<Vec3b>(col,row)[2]>240){
                src.at<Vec3b>(col,row)[0]=0;
                src.at<Vec3b>(col,row)[1]=0;
                src.at<Vec3b>(col,row)[2]=0;
            }
        }
    }
    imshow("BLACK BACKGROUND",src);
//    对图像进行锐化,注意转换结果位数要比原结果多，但是显示的时候还是要以8UC3的格式来进行显示
    Mat imgLaplace;
    Mat sharp = src;
    Mat kernel = (Mat_<float>(3,3)<<1,1,1,1,-8,1,1,1,1);
    filter2D(src,imgLaplace,CV_32F,kernel,Point(-1,-1),0,BORDER_DEFAULT);
    src.convertTo(sharp,CV_32F);
    dst = sharp - imgLaplace;
    dst.convertTo(dst,CV_8UC3);
    imshow("dst",dst);
//      将图像转换为二值图像
    Mat gray_img,bin_img;
    cvtColor(dst,gray_img,CV_BGR2GRAY);
    threshold(gray_img,bin_img,40,255,THRESH_BINARY|THRESH_OTSU);
    imshow("bin_img",bin_img);

//      对图像进行距离变换,并将结果归一化到0-1之间
    Mat dist;
    distanceTransform(bin_img,dist,CV_DIST_L2,3);
    normalize(dist,dist,1,0,NORM_MINMAX);
    imshow("distance transform",dist);
//      获取marker,对二值距离变换
    threshold(dist,dist,.15,1.,THRESH_BINARY);
    imshow("MARKER",dist);
//      对二值图像进行腐蚀
//    Mat kernel1 = getStructuringElement(MORPH_RECT,Size(5,5),Point(-1,-1));
    Mat kernel1 = Mat::ones(13,13,CV_8UC1);
    erode(dist,dist,kernel1);
    imshow("erode img",dist);
//      对结果进行标记
    cout << "the type of dist is:" << dist.type() << endl;


    Mat dist_8u;
    dist.convertTo(dist_8u,CV_8U);

    imshow("dist_8u",dist_8u);
//     find contours,寻找轮廓
    vector<vector<Point>> contours;
    findContours(dist_8u,contours,RETR_EXTERNAL,CHAIN_APPROX_SIMPLE,Point(0,0));
//
    Mat markers = Mat::zeros(dist.size(),CV_32SC1);

//    绘制标记
    for(size_t i=0;i<contours.size();i++){
        drawContours(markers,contours, static_cast<int>(i),Scalar::all(static_cast<int>(i)+1));
    }
//    画出区域，并且对相关区域进行填充
    circle(markers,Point(5,5),3,CV_RGB(255,255,255),-1);
    imshow("markers",markers*20000);
//    分水岭变换
    watershed(src,markers);
    Mat mark = Mat::zeros(markers.size(),CV_8UC1);
    markers.convertTo(mark,CV_8UC1);
    bitwise_not(mark,mark);
//    imshow("marers000",markers);
    cout << "klkllklklkl" << markers << endl;
    imshow("watershed",mark);
//    创建颜色集合
    vector<Vec3b> colors;
    for (size_t i=0;i<contours.size();i++){
        int r = theRNG().uniform(0,255);
        int g = theRNG().uniform(0,255);
        int b = theRNG().uniform(0,255);
        colors.push_back(Vec3b(r,g,b));
    }


//    对结果进行着色
    Mat dst5 = Mat::zeros(markers.size(),CV_8UC3);
    for(int row=0;row<markers.rows;row++){
        for(int col=0;col<markers.cols;col++){
            int index = markers.at<int>(row,col);
            if(index>0 && index<= static_cast<int>(contours.size())){
                dst5.at<Vec3b>(row,col) = colors[index];
            } else{
                dst5.at<Vec3b>(row,col) = Vec3b(0,0,0);
            }
        }
    }
    imshow("final_img",dst5);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
