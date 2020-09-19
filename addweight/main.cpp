#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;

int main() {
    Mat src01,src02,dst;
    src01 = imread("E:\\C++_studying\\laplace\\Lenna.png");
    src02 = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    if ((!src01.data)||(!src02.data)){
        cout << "cant load data,please check the iamge path...";
        exit(1);
    }
    Mat temp,output;
    resize(src02,temp,src01.size());

    addWeighted(src01,0.5,temp,0.5,0,output);
//    multiply(src01,temp,output);
//    add(src01,temp,output);
    imshow("output",output);
    imshow("src02",temp);
    imshow("src01",src01);
    waitKey(0);
    return 0;
}