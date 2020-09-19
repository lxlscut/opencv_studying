#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace std;
using namespace cv;

Mat bgimg;

void myline();
void mycircle();
void retc();
void myellipse();
void randomdraw();
void mypoly();
int main() {

    bgimg = imread("C:\\Users\\PC\\Pictures\\wonder.jpg");
    if(!bgimg.data){
        cout<<"cant load data"<<endl;
        exit(1);
    }
    myline();
    mycircle();
    retc();
    myellipse();
    mypoly();
    randomdraw();
    putText(bgimg,"hello opencv",Point(50,200),CV_FONT_BLACK,4.0,Scalar(100,200,100),10,LINE_AA);
    cout << bgimg.rows <<" " << bgimg.cols <<endl;
    imshow("bgimg",bgimg);
    waitKey(0);
    return 0;
}

void myline(){
    Point point = Point(10,10);
    Point point1;
    point1.x = 100;
    point1.y = 200;
    Scalar color = Scalar(0,0,255);
    line(bgimg,point,point1,color,2,LINE_AA,2);
}

void mycircle(){
    Point center = Point(bgimg.cols/2,bgimg.rows/2);
    int radius = 200;
    Scalar color = Scalar(0,255,0);
    circle(bgimg,center,radius,color,2,LINE_8,0);
}

void retc(){
    Scalar color = Scalar(255,255,0);
    Rect rect = Rect(100,100,300,300);
    rectangle(bgimg,rect,color,5,LINE_AA,0);
};
void myellipse(){
    Scalar color = Scalar(100,100,100);
    Point center01 = Point(bgimg.cols/2,bgimg.rows/2);
    Point center02 = Point(bgimg.cols/4*3,bgimg.rows/4*3);
    ellipse(bgimg,center01,Size(bgimg.cols/2,bgimg.rows/2),45,0,360,color,2,LINE_AA,0);
}

void randomdraw(){
    RNG a = RNG(112233);
    Point start,end;

    namedWindow("random line",WINDOW_AUTOSIZE);
    for (int i = 0;i<10000;i++){
        start.x = a.uniform(0,bgimg.cols);
        start.y = a.uniform(0,bgimg.rows);
        end.x = a.uniform(0,bgimg.cols);
        end.y = a.uniform(0,bgimg.rows);
        Scalar color = Scalar(a.uniform(0,255),a.uniform(0,255),a.uniform(0,255));
        line(bgimg,start,end,color,2,LINE_AA,0);
        imshow("random line",bgimg);
        if (waitKey(50)>0){
            break;
        }
    }
}


void mypoly(){
    Point ptz[1][5];
    ptz[0][0] = Point(100,100);
    ptz[0][1] = Point(100,200);
    ptz[0][2] = Point(200,200);
    ptz[0][3] = Point(200,100);
    ptz[0][4] = Point(100,100);

    const Point* pptz[] = {ptz[0]};
//    cout << pptz << endl;
    int ppt[] = {5};
    Scalar color = Scalar(255,12,255);
    fillPoly(bgimg,pptz,ppt,1,color,LINE_AA,0);
};
