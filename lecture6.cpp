#include <iostream>
// #define PIE 3.1415926535 // 상수 선언

using namespace std;

int main() {
    // 원의 넓이를 구하는 프로그램
    // 반지름 * 반지름 * 파이

    // C++ 엥서는 const를 사용해서 상수를 선언할 수 있다.
    const float PIE = 3.1415926535;
    //변수처럼 중간에 바꾸면 에러난다.
    //그리고 상수를 선언하면서 값을 넣어줘야 한다.

    int r = 3;
    float s = r * r * PIE;
    // 1. 바뀔 필요가 없는 수
    // 2. 바뀌어서는 안되는 수
    // 상수

    int r2 = 3;
    float s2 = r2 * r2 * PIE;

    cout << s << endl;

    /////////////

    //데이터형 변환

    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할 때
    */

    int a = 3.141592; 
    cout << a << endl; // int로 하면 3이 출력된다.

    // 강제적으로 데이텨형 변환
    // typeName(a) (typeNAME)a 
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    // C++
    // static_cast<typeName>()
    cout << static_cast<int>(ch) << endl;


    return 0;
}