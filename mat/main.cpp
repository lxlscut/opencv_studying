#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src;
    src = imread("E:\\C++_studying\\laplace\\Lenna.png");
    if (!src.data){
        cout << "cant load data,please check the iamge path...";
        exit(1);
    }
    imshow("src",src);
    Mat dst = Mat(src.size(),src.type());
    dst = Scalar(127,0,255);


    Mat dst2;
    src.copyTo(dst2);
    imshow("dst2",dst2);
    imshow("dst",dst);

    waitKey(0);
    Mat A(2,2,CV_8UC3,Scalar(0,0,255));
    Mat B;
    B.create(3,4,CV_8UC3);
    B = Scalar (111,111,111);
    Mat C = (Mat_<char>(3,3,3));
//    printf("A");
    cout << C << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
