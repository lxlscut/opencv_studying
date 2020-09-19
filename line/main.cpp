#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main() {
//    Mat src = imread("C:\\Users\\PC\\Pictures\\line.png");
    Mat src = imread("C:\\Users\\PC\\Pictures\\code.png");
//    imshow("")
    Mat horizontal,gray_src,vertical,bin_image,final_image;
    cvtColor(src,gray_src,CV_BGR2GRAY);
    imshow("gray_src",gray_src);
//    先提取水平的线
    Mat horizontal_kernel = getStructuringElement(MORPH_RECT,Size(55,1),Point(-1,-1));
    Mat vertical_kernel = getStructuringElement(MORPH_RECT,Size(1,55));
    Mat code_kernel = getStructuringElement(MORPH_RECT,Size(3,3));
//    转换为二值图
    adaptiveThreshold(~gray_src,bin_image,255,ADAPTIVE_THRESH_MEAN_C,THRESH_BINARY,15,0);

//    腐蚀操作
    erode(bin_image,horizontal,code_kernel);
//    膨胀操作
    dilate(horizontal,final_image,code_kernel);
    imshow("bin_image",bin_image);
    imshow("horizontal",horizontal);
    bitwise_not(final_image,final_image);
//    blur(final_image,final_image,Size(3,3));
    imshow("final_image",final_image);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
