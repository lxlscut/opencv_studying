#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src,dst;
    src = imread("E:\\C++_studying\\laplace\\Lenna.png");
    if (!src.data){
        cout << "cant load data,please check the iamge path...";
        exit(1);
    }
    imshow("src",src);
    cvtColor(src,dst,CV_BGR2GRAY);
    Mat dst2 =Mat::zeros(src.size(),src.type());
    int cols = dst.cols;
    int rows = dst.rows;
    int channel = src.channels();
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (channel == 1){
                int pixel = dst.at<uchar>(i,j);
                dst2.at<uchar>(i,j) = 255-pixel;
            } else if (channel == 3){
                int b = src.at<Vec3b>(i,j)[0];
                int g = src.at<Vec3b>(i,j)[1];
                int r = src.at<Vec3b>(i,j)[2];
                dst2.at<Vec3b>(i,j)[0] = b;
                dst2.at<Vec3b>(i,j)[1] = g;
                dst2.at<Vec3b>(i,j)[2] = 0;
            }
        }
    }



    imshow("dst",dst);
    imshow("dst2",dst2);
    waitKey(0);
    return 0;
}