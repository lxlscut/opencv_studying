#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int threshold_value = 127;
int threshold_max = 255;
int type = 2;
int type_max = 5;

void mythreshold(int i, void *pVoid);
//void mythreshold1(int i, void *pvoid);

Mat src,gray_src,dst1,dst2;

int main() {

    namedWindow("final_image",WINDOW_AUTOSIZE);
    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");

//    创建滑动条
    createTrackbar("threshold value", "final_image", &threshold_value, threshold_max,
                   mythreshold);

    createTrackbar("threshold type","final_image",&type,type_max,mythreshold);

    mythreshold(0,0);
//    mythreshold1(0,0);
    imshow("src",src);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void mythreshold(int i, void *pVoid){
    cvtColor(src,gray_src,CV_BGR2GRAY);
//    cout << ("%d",THRESH_BINARY_INV) << endl;
////    cout << ("%d",THRESH_MASK) << endl;
////    cout << ("%d",THRESH_OTSU) << endl;
//    cout << ("%d",THRESH_TOZERO) << endl;
//    cout << ("%d",THRESH_TOZERO_INV) << endl;
//    cout << ("%d",THRESH_BINARY) << endl;
//    cout << ("%d",THRESH_TRUNC) << endl;
    threshold(gray_src,dst1,threshold_value,threshold_max,type);
//    threshold(gray_src,dst1,threshold_value,threshold_max,type);
//    自动实现阈值操作
    threshold(gray_src,dst1,0,255,THRESH_OTSU|type);

    imshow("final_image",dst1);
};

//void mythreshold1(int i, void *pVoid){
//    cvtColor(src,gray_src,CV_BGR2GRAY);
//    threshold(gray_src,dst2,threshold_value,threshold_max,type);
//    imshow("final_image",dst2);
//};