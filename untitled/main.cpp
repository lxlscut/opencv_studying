#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src = imread("E:\\c++_studying\\untitled\\src.png");
    imshow("src",src);


//    创建进行形态学变换的核
    Mat kernel = getStructuringElement(MORPH_RECT,Size(11,11),Point(-1,-1));
// 利用该核进行开操作或者闭操作
    Mat dst,dst1,dst2;
//    闭操作
//    morphologyEx(src,dst,CV_MOP_CLOSE,kernel);
//    开操作
    morphologyEx(src,dst1,CV_MOP_OPEN,kernel);
//    黑帽操作
    morphologyEx(src,dst,CV_MOP_BLACKHAT,kernel);
//    顶帽操作
    morphologyEx(src,dst2,CV_MOP_TOPHAT,kernel);
    imshow("open",dst1);
    imshow("balckhat",dst);
    imshow("TOPHAT",dst2);
    waitKey(0);
    return 0;
}
