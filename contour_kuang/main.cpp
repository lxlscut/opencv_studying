#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

Mat src,resize_img,gray_src;

void contour(int,void*);

int threshold_value = 20;
int threshold_max = 200;
int main() {
//    namedWindow("src",WINDOW_AUTOSIZE);
    namedWindow("output",WINDOW_AUTOSIZE);
    src = imread("C:\\Users\\PC\\Pictures\\balloom2.jpg");
    blur(src,src,Size(3,3),Point(-1,-1));
    resize(src,resize_img,Size(500,500));
//    imshow("src",resize_img);
    cvtColor(resize_img,gray_src,CV_BGR2GRAY);
    createTrackbar("thredhold","output",&threshold_value,threshold_max,contour);
    contour(0,0);
    waitKey(0);
    cout << src.size() <<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void contour(int,void*){
    Mat bin_img;
    RNG rng(1234);
//    转换二值图像
    threshold(gray_src,bin_img,threshold_value,threshold_max,THRESH_BINARY);
//    求得轮廓
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    findContours(bin_img,contours,hierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));

    vector<vector<Point>> contour_ploy(contours.size());
    vector<Rect> poly_rects(contours.size());
    vector<Point2f> ccs(contours.size());
    vector<float> radius;

    vector<RotatedRect> minRect(contours.size());
    vector<RotatedRect> myellipse(contours.size());

    for (size_t i = 0;i<contours.size();i++){
//        封闭的多边形
        approxPolyDP(Mat(contours[i]),contour_ploy[i],3, true);
//        寻找举行
        poly_rects[i] = boundingRect(contour_ploy[i]);



//        寻找圆,为什么会报错？？？？？？
//        minEnclosingCircle(contour_ploy[i],ccs[i],radius[i]);



//        寻找椭圆
        if(contour_ploy[i].size()>=5){
            myellipse[i] = fitEllipse(contour_ploy[i]);
            minRect[i] = minAreaRect(contour_ploy[i]);
        }
    }
//    画出圆
    Mat draw_img;
    Point2f pts[4];
    resize_img.copyTo(draw_img);
    for (size_t i=0;i<contours.size();i++){
        Scalar color = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
//        circle(resize_img,ccs[i],radius[i],color,3,LINE_AA,0);
//        rectangle(draw_img,poly_rects[i],color,1,LINE_AA,0);
        ellipse(draw_img,myellipse[i],color);
        minRect[i].points(pts);
        for (int j =0;j<4;j++){
            line(draw_img,pts[j],pts[(j+1)%4],color);
        }
    }

    imshow("output",draw_img);

};