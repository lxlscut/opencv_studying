#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void callback(int,void*);

Mat src,dst;
int element_size = 3;
int element_max = 21;



int main() {

    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    namedWindow("dst",CV_WINDOW_AUTOSIZE);
//    此函数最后一个参数是调用的参数~
    createTrackbar("element size", "dst", &element_size, element_max, callback);
    imshow("src",src);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void callback(int,void*){
    int s = element_size*2+1;
//    生成掩模
    Mat structureElement = getStructuringElement(MORPH_RECT,Size(s,s),Point(-1,-1));
//    开始腐化或者膨胀
//膨胀
//    dilate(src,dst,structureElement);
    erode(src,dst,structureElement);
    imshow("dst",dst);
}
