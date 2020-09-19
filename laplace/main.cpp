#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat img = imread("E:\\c++_studying\\laplace\\Lenna.png");
    Mat imgnew,dst,bin_image;
    namedWindow("img",WINDOW_AUTOSIZE);
    cvtColor(img,imgnew,CV_RGB2GRAY);
    imshow("img",img);
    imshow("imgnew",imgnew);
    imwrite("E:\\c++_studying\\laplace\\new.jpg",imgnew);
    GaussianBlur(imgnew,imgnew,Size(3,3),0,0);
    Laplacian(imgnew,dst,imgnew.depth());
    convertScaleAbs(dst,dst);
    threshold(dst,bin_image,0,255,THRESH_OTSU|THRESH_BINARY);
    imshow("dst",dst);
    imshow("bin_image",bin_image);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
