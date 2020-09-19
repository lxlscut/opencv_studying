#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main() {
    Mat src,dst,gau,kkk;
    Mat kernel = (Mat_<int>(3,3)<<0,-1,0,-1,5,-1,0,-1,0);
    src = imread("E:\\c++_studying\\blur1\\3908.jpg");
    medianBlur(src,dst,3);
    bilateralFilter(src,gau,5,100,7);
    filter2D(gau,kkk,gau.depth(),kernel,Point(-1,-1),0);
    imshow("final",kkk);
    imshow("bilateral",gau);
    imshow("src",src);
    imshow("media",dst);
    waitKey(0);

    return 0;
}
