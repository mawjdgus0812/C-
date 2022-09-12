#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 정수형 : 소수부가 없는 수
    // 음의 정수, 0, 양의 정수
    // short < int < long < long long

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof n_int << "bytes." << endl;

    // unsigned int a; // 0 ~ 65535 로 바뀜, 음수를 사용하지 않는다.
    // unsigned int b;
    unsigned long c;

    // 실수형 : 소수부가 있는 수
    float a = 3.14;
    int b = 3.14; // 그냥 3으로 나온다.

    cout << a << " " << b << endl;

}