#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;
int main() {
    Mat src;
    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    if(!src.data){
        cout<<"cant load data"<<endl;
        exit(1);
    }
    Mat dst = Mat(src.size(),src.type());
    int src_rows = src.rows;
    int src_cols = src.cols;
    Mat temp;
//    类型转换为float
    src.convertTo(temp,CV_32F);
    float alpha = 1.2;
    float gamma = 10;
    for (int i=0;i<src_rows;i++){
        for (int j=0;j<src_cols;j++){
            float b = temp.at<Vec3f>(i,j)[0]*alpha+gamma;
            float g = temp.at<Vec3f>(i,j)[1]*alpha+gamma;
            float r = temp.at<Vec3f>(i,j)[2]*alpha+gamma;
            dst.at<Vec3b>(i,j)[0] = saturate_cast<uchar>(b);
            dst.at<Vec3b>(i,j)[1] = saturate_cast<uchar>(g);
            dst.at<Vec3b>(i,j)[2] = saturate_cast<uchar>(r);
        }
    }
    imshow("output",dst);
    waitKey(0);
    return 0;
}