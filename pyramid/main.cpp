#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
    Mat src,huge,small,first,second,final;
    src = imread("C:\\Users\\PC\\Pictures\\3908.jpg");
//    上采样
    pyrUp(src,huge);
//    下采样
    pyrDown(src,small);
//    差分金字塔
    GaussianBlur(src,first,Size(3,3),0,0);
    GaussianBlur(first,second,Size(3,3),0,0);
    subtract(first,second,final);
    normalize(final,final,255,0,NOMINMAX);
    imshow("final",final);
    imshow("small",small);
    imshow("src",src);
    imshow("huge",huge);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
