#include <iostream>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;

int main() {
    Mat src,gau,xgrad,ygrad;
    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg",0);
    GaussianBlur(src,gau,Size(3,3),0,0,BORDER_DEFAULT);
    imshow("src",src);
//    Sobel(gau,xgrad,CV_16S,1,0,3);
//    Sobel(gau,ygrad,CV_16S,0,1,3);

    Scharr(gau,xgrad,CV_16S,1,0,3);
    Scharr(gau,ygrad,CV_16S,0,1,3);

    convertScaleAbs(xgrad,xgrad);
    convertScaleAbs(ygrad,ygrad);
    imshow("x_grad",xgrad);
    imshow("y_grad",ygrad);

    int width = xgrad.cols;
    int height = ygrad.rows;

    Mat xygrad = Mat(src.size(),src.type());

    for(int row = 0;row<height;row++){
        for (int col=0;col<width;col++){
            int x = xgrad.at<uchar>(row,col);
            int y = ygrad.at<uchar>(row,col);
            int xy = 0.5*x + 0.5*y;
            xygrad.at<uchar>(row,col) = saturate_cast<uchar>(xy);
        }
    }


//    addWeighted(xgrad,0.5,ygrad,0.5,0,xygrad);
    imshow("xygrad",xygrad);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
