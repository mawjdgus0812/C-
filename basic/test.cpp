#include <iostream>

using namespace std;

int main(){
    int a;
    a = 7;

    int b = 3;

    a = 5;
    b = 10;

    //변수는 사용되기 이전에 정의 되어야 합니다.

    cout << "a =" << &a <<", b ="<< &b << endl;
    return 0;
}