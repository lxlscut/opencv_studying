#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace std;
using namespace cv;


Mat src,resize_img,src_gray,dst;
RNG rng(1234);

void mymoment(int,void*);

int threshold_value = 10;
int threshold_max = 100;

int main() {
    namedWindow("output",WINDOW_AUTOSIZE);
    src = imread("C:\\Users\\PC\\Pictures\\hot_air_balloon.jpg");
    resize(src,resize_img,Size(600,600));
    cvtColor(resize_img,src_gray,CV_BGR2GRAY);
    createTrackbar("threshold","output",&threshold_value,threshold_max,mymoment);
    imshow("src",src_gray);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void mymoment(int,void*){
    Mat edge_img;
//    边缘检测
//    cvCanny(&src_gray,&edge_img,threshold_value,threshold_value*2,3);
    Canny(src_gray,edge_img,threshold_value,threshold_value*2,3, false);
//    计算轮廓
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    findContours(edge_img,contours,hierarchy,RETR_TREE,CHAIN_APPROX_SIMPLE,Point(0,0));
//    计算矩
    vector<Moments> contours_moments(contours.size());
//    质心
    vector<Point2f> ccs(contours.size());
    for(size_t i=0;i<contours.size();i++){
        contours_moments[i] = moments(contours[i]);
        ccs[i] = Point(contours_moments[i].m10/contours_moments[i].m00,contours_moments[i].m01/contours_moments[i].m00);
    }
//    绘制最终结果
    Mat draw_img = Mat::zeros(src_gray.size(),CV_8UC3);
    for (size_t i=0;i<contours.size();i++){
        Scalar color = Scalar(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
        cout << "contours"<<i<<" area is :" << contourArea(contours[i]) <<"arclength ls" << arcLength(contours[i], true) <<endl;
        circle(draw_img,ccs[i],3,color,2,LINE_AA);
        drawContours(draw_img,contours,i,color,2,LINE_AA,hierarchy);
    }
    imshow("output",draw_img);




};