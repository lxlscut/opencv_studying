#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace std;
using namespace cv;

void find_and_draw_contour(int,void*);

Mat src,dst01,dst02;
int mythreshold = 20;
int main() {
    namedWindow("output",WINDOW_AUTOSIZE);
    src = imread("C:\\Users\\PC\\Pictures\\images.jpg");
//    imshow("src",src);
    cvtColor(src,dst01,CV_BGR2GRAY);
    createTrackbar("threshold_value","output",&mythreshold,500,find_and_draw_contour);

    waitKey(0);
    std::cout << "Hello, World!" << std::endl;

    return 0;
}

void find_and_draw_contour(int,void*){
    Mat canny_result;
    Mat contour = Mat::zeros(src.size(),src.type());
    vector<vector<Point>> points;
    vector<Vec4i> hierchy;
//    边缘检测获取二值图像
    Canny(src,canny_result,mythreshold,mythreshold*2,3, false);
//    通过二值图像来获取轮廓
    findContours(canny_result,points,hierchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));
//    绘制轮廓
    RNG rng(1234);
    for (size_t i=0;i<points.size();i++){
        Scalar color = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
        drawContours(contour,points,i,color,3,LINE_AA);
    }
    imshow("output",contour);
};