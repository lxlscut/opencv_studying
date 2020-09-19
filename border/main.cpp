#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

RNG rng = RNG(123456);

int main() {
    Mat src,dst;
    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");

    int top = (int)(0.05*src.rows);
    int bottom = (int)(0.05*src.rows);
    int left = (int)(0.05*src.cols);
    int right = (int)(0.05*src.cols);

    int border_type = BORDER_DEFAULT;

    RNG rng(12345);
    int c = 0;
    while(true){
        c = waitKey(500);
//        如果按下esc，退出
        if(char(c) == 27){
            break;
        }else if (char(c) == 'r'){
            border_type = BORDER_REPLICATE;
        } else if (char(c) == 'v'){
            border_type = BORDER_WRAP;
        } else if (char(c) == 'c'){
            border_type = BORDER_CONSTANT;
        }
        Scalar color = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
        copyMakeBorder(src,dst,top,bottom,left,right,border_type,color);
        imshow("src",src);
        imshow("dst",dst);
    }



    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
