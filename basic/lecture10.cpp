#include <iostream>

using namespace std;

int main(){
    // 구조체 
    // 사용자의 입력대로 원하는 데이터형을 만들 수 있다
    // 그 특장점이 가장 잘 들어나는 것이 구조체이다.

    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합 !
    // cf) 배열 : 같은 데이터형의 집합

    //축구선수
    string name;
    string position;
    float height;
    float weight;

    // 위 모든 데이터들이 같은 축구선수 한명을 나타내기 때문에
    // 배열로서 관리할 수 없는 경우 구조체를 사용한다. (데이터 형이 다르다)

    struct MyStruct
    {
        /* member라고 불리는 구성 요소 */
        string name;
        string position;
        int height;
        int weight;
    }; 
    
    // 새로운 구조체를 선언하지 않아도, 마지막에 선언해주면 선언됨.

    // struct MyStruct
    // {
    //     /* member라고 불리는 구성 요소 */
    //     string name;
    //     string position;
    //     int height;
    //     int weight;
    // } B; 
    
    // MyStruct A; // A라는 이름의 MyStruct형 변수를 사용
    // A.name = "Son";
    // A.position = "Winger";
    // A.height = 183;
    // A.weight = 77;

    // MyStruct A = { // A라는 이름의 MyStruct형 변수를 사용
    //     "Son",
    //     "Winger",
    //     183,
    //     77
    // };
    
    // cout << A.position << endl;

    MyStruct A[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << A[0].height << endl;

    return 0 ;
}