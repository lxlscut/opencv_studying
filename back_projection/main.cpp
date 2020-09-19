#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void hist_and_back_projection(int, void*);

Mat src,src_hsv,dst,hue;
int bins = 2;
int main() {

    src = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    imshow("src",src);
//    namedWindow("output",WINDOW_AUTOSIZE);
//    转换图片到HSV格式
    cvtColor(src,src_hsv,CV_BGR2HSV);
//    提取相应通道的数据
    cout << src_hsv.size() << endl;
    hue.create(src_hsv.size(),src_hsv.depth());
    int mixchannels[] = {0,0};
//    拷贝了h通道
    mixChannels(&src_hsv,1,&hue,1,mixchannels,1);

    createTrackbar("BIN_WIDTH","src",&bins,180,hist_and_back_projection);

    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void hist_and_back_projection(int,void*){
    //    计算直方图
    float hist_range[] = {0,180};
    const float *range = {hist_range};
//    开始计算
    Mat h_hist;
    calcHist(&hue,1,0,Mat(),h_hist,1,&bins,&range,true, false);
//    对直方图进行归一化
    normalize(h_hist,h_hist,255,0,NORM_MINMAX,-1);

//    开始反向映射
    Mat back_image;
    calcBackProject(&hue,1,0,h_hist,back_image,&range,1, true);
    imshow("back_image",back_image);
//    绘制直方图
    int hist_h = 400;
    int hist_width = 400;
//    求得的本来就是整数
    int bin_width = hist_width/bins;
    Mat hist_img = Mat(hist_h,hist_width,CV_8UC3,Scalar(0,0,0));
    for (int i = 1;i<bins;i++){
        rectangle(hist_img,Point((i-1)*bin_width,hist_h-cvRound(h_hist.at<float>(i-1)*(400/255))),
                Point(i*bin_width,hist_h),Scalar (255,0,0),3,LINE_AA);
    }
    imshow("hist_img",hist_img);
};