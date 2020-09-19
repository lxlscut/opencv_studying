#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>

using namespace cv;
using namespace std;

int main() {

    Mat img = imread("E:\\c++_studying\\laplace\\Lenna.png");
    if (!img.data){
        cout<< "cant load data,please check out the image path..."<< endl;
        exit(-1);
    }
    imshow("img",img);

//    列数
    int img_cols = (img.cols-1)*(img.channels());
//    行数
    int img_rows = img.rows;

    Mat dst = Mat::zeros(img.size(),img.type());

// 每一次运算需要偏移channels的长度，才是下一个channel
//    int offsetx = img.channels();
//    for (int row = 1;row<img_rows;row++){
////        获取每一行的指针，由于不能对指针内容进行修改，故使用const指针
//        const uchar* previous = img.ptr<uchar>(row-1);
//        const uchar *current = img.ptr<uchar>(row);
//        const uchar *next = img.ptr<uchar>(row+1);
//        uchar *output = dst.ptr<uchar>(row);
//        for (int col = offsetx;col<img_cols;col++){
//            output[col] = saturate_cast<uchar>(5*current[col]-current[col+offsetx]-current[col-offsetx]-previous[col]-next[col]);
//        }
//    }
    Mat kernel = (Mat_<char>(3,3)<<0,-1,0,-1,5,-1,0,-1,0);
    double t = getTickCount();
    filter2D(img,dst,img.depth(),kernel);
    double timeconsume = (getTickCount()-t )/ getTickFrequency();
    cout << timeconsume << endl;
    imshow("dst",dst);
    waitKey(0);
    cout << "Hello, World!" << endl;
    return 0;
}
