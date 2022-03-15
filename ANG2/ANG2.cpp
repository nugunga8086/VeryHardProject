// ANG2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/*int main()
{
    double e;
    double d;

    cin >> e;
    e = e * 10000;
    d = 1 / e;
 
    cout << d;
}
*/

/*
int main()
{
    cout << "니 키는 정하지 못한다 너는 어차피 170이니까 보이♥";
    float Mykey = 1.7;
    cin >> Mykey;
    cout << "몸무게를 입력해라 보이♥";
    float Mybody = 0;
    cin >> Mybody;
    float BMI = Mybody / Mykey * Mykey;
    
    if (BMI > 25 )
    {
        printf("쌉돼지");
    }
    else if (BMI < 25)
    {
        printf("그래도 아직은 쓸만하네♥");
    }
}
*/
int main()
{
    cout << "사탕을 준 친구들 :";
    int Men = 0;
    cin >> Men;
    int Total = 0;
    for (int i = 0;  i < Men; i++) //횟수가 사람보다 많아질때까지 달려가기 
    {
        cout << ":D 몇개줬을까요요요옹? :";
        int Candy = 0;
        cin >> Candy;
        Total += Candy;
        continue;      
    }
    cout << Total;
}