#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void update_map(void);
Mat src,map_x,map_y,dst;
int index = 0;

int main() {
    src = imread("C:\\Users\\PC\\Pictures\\images.jpg");
//    imshow("src",src);
    map_x.create(src.size(),CV_32FC1);
    map_y.create(src.size(),CV_32FC1);
    int c = 0;
    while (true){
        c = waitKey(500);
        if ((char)c == 27){
            break;
        }
//        if (exit_code == -1){
//            exit_code = 0;
//        }

//        cout <<"退出码"<< exit_code<< endl;
        index = c % 4;
//        cout <<"index :"<< index << endl;
        update_map();
        remap(src,dst,map_x,map_y,INTER_LINEAR,BORDER_CONSTANT,Scalar(0,255,255));
        imshow("dst",dst);
    }

//    waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void update_map(void){
    cout << index << endl;
    for(int row = 0;row<src.rows;row++){
        for(int col=0;col<src.cols;col++){

            switch(index){
//                变为原来的0.5倍
//                cout << index << endl;
                case 0:
                    if(col > src.cols*0.25 && col <= src.cols*0.75 && row>src.rows*0.25 && row<= src.rows*0.75){
//                        cout << "inter" << endl;
                        map_x.at<float>(row,col) = 2*((col - src.cols*0.25));
                        map_y.at<float>(row,col) = 2*((row - src.rows*0.25));
                    } else{
                        map_x.at<float>(row,col) = 0;
                        map_y.at<float>(row,col) = 0;
                    };
                    break;
//                    水平翻折
                case 1:
                    map_x.at<float>(row,col) = src.cols-col-1;
                    map_y.at<float>(row,col) = row;
                    break;
//                    竖直翻折
                case 2:
                    map_x.at<float>(row,col) = col;
                    map_y.at<float>(row,col) = src.rows-row-1;
                    break;
//                    原点对称
                case 3:
                    map_x.at<float>(row,col) = src.cols-col-1;
                    map_y.at<float>(row,col) = src.rows-row-1;
                    break;
            }
        }
    }
}
