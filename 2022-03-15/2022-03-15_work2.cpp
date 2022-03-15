//과제.2
//
//래현이는 요즘 자신의 몸무게에 대해서 궁금한게 많다.
//
//래현이의 키는 170cm이다.
//
//자신이 비만인지 알기위해서 BMI 수치를 사용해 BMI에 따라 비만인지 말해보자

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int weight;
	cout << "몸무게를 입력해주세요: ";
	cin >> weight;
	
	int bmi = weight / (1.7 * 1.7);

	if (bmi >= 25) {
		cout << "비만";
	}
	else if (bmi >= 23) {
		cout << "경도비만";
	}
	else if(bmi >= 18.5){
		cout << "정상";
	}
	else {
		cout << "저체중";
	}

	return 0;
}