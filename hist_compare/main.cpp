#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

string converttostring(double d);

int main() {
    Mat SRC01,SRC02,SRC03;
//  读取原图像
    SRC01 = imread("C:\\Users\\PC\\Pictures\\flower.jpg");
    SRC02 = imread("C:\\Users\\PC\\Pictures\\flower.jpg");
    SRC03 = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");

//    imshow("src01",SRC01);
//    imshow("src02",SRC02);
//    imshow("src03",SRC03);

//  转为HSV格式
    Mat src01,src02,src03;
    cvtColor(SRC01,src01,CV_BGR2HSV);
    cvtColor(SRC02,src02,CV_BGR2HSV);
    cvtColor(SRC03,src03,CV_BGR2HSV);
//    imshow("src01",src01);
//    imshow("src02",src02);
//    imshow("src03",src03);
//    开始计算直方图
    //    设置直方图参数,分别对h与s通道
    int h_bins = 50;
    int s_bins = 60;
    int histsize[] = {h_bins,s_bins};
    float h_range[] = {0,180};
    float s_range[] = {0,256};
    const float *ranges[] = {h_range,s_range};
    int channel[] = {0,1};

    //      开始计算
    Mat hist01,hist02,hist03;
    calcHist(&src01,1,channel,Mat(),hist01,2,histsize,ranges,true,false);
    normalize(hist01,hist01,1,0,NORM_MINMAX,-1);
    calcHist(&src02,1,channel,Mat(),hist02,2,histsize,ranges, true, false);
    normalize(hist02,hist02,1,0,NORM_MINMAX,-1);
    calcHist(&src03,1,channel,Mat(),hist03,2,histsize,ranges, true, false);
    normalize(hist03,hist03,1,0,NORM_MINMAX,-1);

//    开始进行直方图的比较,输出的结果小数位比较多，因此采用float格式
    double one_one = compareHist(hist01,hist01,CV_COMP_CORREL);
    double one_tow = compareHist(hist03,hist01,CV_COMP_CORREL);

//  显示结果
    putText(SRC01,converttostring(one_tow),Point(100,100),CV_FONT_BLACK,
            3,Scalar(255,0,0));
    imshow("src01",SRC01);


    waitKey(0);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

string converttostring(double d){
    ostringstream os;
    if (os << d){
        return os.str();
    }
    return "invalid conversion";
};