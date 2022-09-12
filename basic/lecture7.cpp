#include <iostream>

using namespace std;

int main() {

    // + - * / % 

    /*
    + : 두 개의 피연산자의 합을 계산합니다.
    - : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산합니다.
    * : 두 개의 피연산자의 곱을 계산합니다.
    / : 첫 번째 피 연산자에서 두 번짜 피연산자를 나눕니다.
    >> 두 개의 피 연산자가 모두 정수이면 결과값은 '몫' 입니다.
    % : 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구합니다.
    예를 들어서 19를 6으로 나누게 되면 그 값은 1입니다.
    부동 소수점(실수) 사용할 수 없습니다.
    */

    int a = 10;
    int b = 3;

    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    // auto 라는 c++만의 데이터 값
    // 변수를 선언하고 대입하는게 아니라,
    // 대입하고 선언함

    auto n = 100; // n 은 int
    auto x = 1.5; // x 는 float
    auto y = 1.3e12L; // y는 long long 으로 자동으로 저장

    //썩 좋은 코딩 습관은 아님.

    //auto
    //3개의 float형 변수

    auto x = 0.0; // x 는 float
    float y = 0; // y 는 float
    auto z = 0; // z 는 자동으로 int -> 오류가 발생할 수 있다.


}