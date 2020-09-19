#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main() {
    Mat robert_x,robert_y,sobel_x,sobel_y,laplace;
    Mat src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg",0);
//    imshow("src",src);

//    Mat robert_x_kernel = (Mat_<int>(2,2)<<1,0,0,-1);
//    Mat robert_y_kernel = (Mat_<int>(2,2)<<0,1,-1,0);
//    Mat sobel_x_kernel = (Mat_<int>(3,3)<<1,0,-1,2,0,-2,1,0,-1);
//    Mat sobel_y_kernel = (Mat_<int>(3,3)<<1,2,1,0,0,0,-1,-2,-1);
//    Mat laplace_kernel = (Mat_<int>(3,3)<<0,-1,0,-1,4,-1,0,-1,0);
//    filter2D(src,robert_y,-1,robert_y_kernel);
//    filter2D(src,robert_x,-1,robert_x_kernel);
//    filter2D(src,sobel_x,-1,sobel_x_kernel);
//    filter2D(src,sobel_y,-1,sobel_y_kernel);
//    filter2D(src,laplace,-1,laplace_kernel);
//    imshow("sobel_x",sobel_x);
//    imshow("sobel_y",sobel_y);
//    imshow("robert_x",robert_x);
//    imshow("robert_y",robert_y);
//    imshow("laplace",laplace);
    int c = 0;
    int index = 0;
    int ksize = 3;
    Mat ttt;
    while (true){
        c = waitKey(500);
        if(char(c)==27){
            break;
        }
        ksize = 4+(index%5)*2+1;
        Mat kernel = Mat::ones(Size(ksize,ksize),CV_32FC1)/(float)(ksize*ksize);
        filter2D(src,ttt,-1,kernel);
        imshow("ttt",ttt);
        index ++ ;
    }


//    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
