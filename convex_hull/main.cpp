#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
//寻找凸包
using namespace std;
using namespace cv;

Mat src,src_gray,dst;

void convex(int,void*);

int cur_threshold = 50;
int threshold_max = 255;

int main() {
    namedWindow("output",WINDOW_AUTOSIZE);
    src = imread("C:\\Users\\PC\\Pictures\\butterfly.jpg");
    imshow("src",src);
    cvtColor(src,src_gray,CV_BGR2GRAY);
    createTrackbar("thredhold","output",&cur_threshold,threshold_max,convex);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void convex(int,void*){
    RNG rng(1234);
    Mat bin_img;
    //    二值图像
    threshold(src_gray,bin_img,cur_threshold,threshold_max,THRESH_BINARY);
    //    找轮廓
    vector<vector<Point>> points;
    vector<Vec4i> hierarchy;
    findContours(bin_img,points,hierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));
    //    根据轮廓找凸包
    vector<vector<Point>> conv(points.size());
    for (size_t i=0;i<points.size();i++){
        convexHull(points[i],conv[i], false, true);
    }
    //   绘制凸包与轮廓
    Mat final_img = Mat::zeros(src.size(),src.type());
    for (size_t i=0;i<points.size();i++){
        Scalar color = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
        drawContours(final_img,points,i,color,2,LINE_AA);
        drawContours(final_img,conv,i,Scalar(0,0,255),2,LINE_AA);
    }
    imshow("output",final_img);
}; 