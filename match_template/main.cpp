#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void match_demo(int,void*);
int type = 2;
Mat src,temp,dst;

int main() {

    src = imread("C:\\Users\\PC\\Pictures\\flower.jpg");
    temp= imread("C:\\Users\\PC\\Pictures\\flower2.jpg");

    namedWindow("output",WINDOW_AUTOSIZE);

    createTrackbar("match_type","output",&type,5,match_demo);

    imshow("output",src);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void match_demo(int,void*){
    int width = src.cols - temp.cols;
    int height = src.rows - temp.rows;

    Mat match_result(width,height,CV_32FC1);
//    开始进行模板的匹配
    matchTemplate(src,temp,match_result,type,Mat());
    normalize(match_result,match_result,1,0,NORM_MINMAX,-1);
//    找出匹配的最大点与最小点
    Point minloc;
    Point maxloc;
    double min,max;
    src.copyTo(dst);
    minMaxLoc(match_result,&min,&max,&minloc,&maxloc,Mat());
    Point temploc;
    if (type==CV_TM_SQDIFF || type == CV_TM_SQDIFF_NORMED){
        temploc = minloc;
    } else{
        temploc = maxloc;
    }
    rectangle(dst,Rect(temploc.x,temploc.y,temp.cols,temp.rows),Scalar(30*type,30*type,30*type),LINE_AA);
    imshow("output",dst);
};