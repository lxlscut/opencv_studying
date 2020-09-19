#include <iostream>

using namespace std;

int main() {
    int nArray[] = {1,2,3};
    int * a = {nArray};
    cout << a << endl;
    cout << *a <<endl;
    *a++;
    cout << *a << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
