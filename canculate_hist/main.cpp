#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace std;
using namespace cv;

int main() {
    Mat src,dst;
    src = imread("C:\\Users\\PC\\Pictures\\images.jpg");
//    imshow("src",src);
//    提取3个单独的通道
    vector<Mat> channel;
    split(src,channel);

//    imshow("channel",channel[1]);
    int histSize = 256;
    float range[] = {0,256};
    const float *histRange = {range};
//    计算不同通道的直方图
    Mat b_hist,g_hist,r_hist;
    calcHist(&channel[0],1,0,Mat(),b_hist,1,&histSize,&histRange,true, false);
    calcHist(&channel[1],1,0,Mat(),g_hist,1,&histSize,&histRange,true, false);
    calcHist(&channel[2],1,0,Mat(),r_hist,1,&histSize,&histRange,true, false);

    cout << b_hist << endl;
    //    对计算出的直方图进行归一化
    int hist_h = 400;
    int hist_v = 512;
    int bin_w = hist_v/histSize;
//    创建一个存储最终图片的直方图，由于是彩图，因此要三通道
    Mat hist_img(hist_v,hist_h,CV_8UC3,Scalar(0,0,0));
//    归一化
    normalize(b_hist,b_hist,hist_h,0,NOMINMAX,-1);
    normalize(g_hist,g_hist,hist_h,0,NOMINMAX,-1);
    normalize(r_hist,r_hist,hist_h,0,NOMINMAX,-1);

//    绘制直方图
    for(int i=1;i<histSize;i++){
//        这里为什么要hist_h-******因为hist_img的坐标形式为上面是0，下面为最大值，方向是从上到下的
        line(hist_img,Point((i-1)*bin_w,hist_h-cvRound(b_hist.at<float>(i-1))),
                Point((i)*bin_w,hist_h-cvRound(b_hist.at<float>(i))),Scalar(255,0,0),3,LINE_AA);
        line(hist_img,Point((i-1)*bin_w,hist_h-cvRound(g_hist.at<float>(i-1))),
                Point((i)*bin_w,hist_h-cvRound(g_hist.at<float>(i))),Scalar(0,255,0),3,LINE_AA);
        line(hist_img,Point((i-1)*bin_w,hist_h-cvRound(r_hist.at<float>(i-1))),
                Point((i)*bin_w,hist_h-cvRound(r_hist.at<float>(i))),Scalar(0,0,255),3,LINE_AA);
    }
    imshow("histimg",hist_img);
    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
