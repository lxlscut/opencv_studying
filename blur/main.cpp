#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main() {
    Mat src,dst,gau,kkk;

    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    imshow("wonder",src);
    blur(src,dst,Size(3,3),Point(-1,-1));
    imshow("blur",dst);
    GaussianBlur(src,gau,Size(3,3),5,5);
    imshow("gau",gau);
//    Mat kernel = saturate_cast<uchar>();
    Mat kernel = Mat_<uchar>(3,3)<<(1,1,1,1,1,1,1,1,1);
    filter2D(src,kkk,src.depth(),kernel);
    imshow("kkk",kkk);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
