#include <iostream>

using namespace std;

class aa{
    int num;
public:
    aa(){
        int b = 10;
        num = b;
    };
    void out1(){
        cout<<num<<endl;
    };
    void out2() const {
        cout<<num<<endl;
    };
//    void out3() const {
//        num += 10;
//        cout << num <<endl;
//    };
};


int main() {
    aa a1;
    a1.out1();
    a1.out2();
    const aa a2;
//    a2.out1();
    a2.out2();
//    cout << "Hello, World!" << endl;
    return 0;
}
