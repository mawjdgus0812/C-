#include <iostream>
#include <cstring> // string() 함수를 사용하기 위해

using namespace std;

int main(){
    
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programming";

    cout << "Hi my name is " << name2;
    cout << "! what is your name?\n";

    // cin >> name1; // 입력을 저장한다. 꺽쇠는 데이터의 흐름이다.
    //이 코드의 문제는 Panda Cording 처럼 공백이 들어갔을 때, 문자열의 끝이라고 인식한다.
    //cin은 공백이나 엔터까지만 인식한다.
    //공백을 포함해서 받는 것은 get과 getline이다.
    cin.getline(name1,Size); // 기본적으로 get과 getline은 동일하게 동작한다.
    cout << "um, " << name1 << "sir, your name is ";
    cout << strlen(name1) << " words.\n";
    cout << sizeof(name1) << " bytes.\n";
    cout << "Your name is " << name1[0] << "words.\n";
    name2[3] = '\0';
    cout << "My first three name is : ";
    cout << name2 << endl;

    //C++에서 문자열을 다루는 방법 중 하나인 string

    /*
    C스타일로 string 객체를 초기화할 수 있다.
    cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
    cout을 사용하여 string 객체를 디스플레이할 수 있다.
    배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

    배열은 다른 배열에 통째로 대입할 수 없다.
    >> String에서는 가능하다.
    ==> 문자열과 같다.
    */

    char char1[20];
    char char2[20] = "jauar";
    string str1;
    string str2 = "panda";
    // char1 = char2 // 불가능
    str1 = str2; // 가능
    cout << char1 << endl; // @
    cout << char2 << endl; // jauar

    cout << str1 << endl; // panda
    cout << str2 << endl; // panda



    return 0;
}