#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src,dst;

    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg",0);
    equalizeHist(src,dst);
    imshow("src",src);
    imshow("dst",dst);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
