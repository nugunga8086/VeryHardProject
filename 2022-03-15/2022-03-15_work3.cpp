//과제.3
//
//래현이는 사탕이 많다.그래서 평소에 사탕을 많이 나누어 주는데 래현이가 사탕을 나눠준 횟수가 첫번째 값으로 들어간다.
//
//그 다음줄부터는 횟수만큼 랜덤된 값이 들어가는데 래현이가 나누어준 사탕의 총 개수를 구해보자

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int d_count = 0; // 나눠준 횟수
	int c_count = 0; // 사탕 개수

	
	cin >> d_count;
	for (int i = 0; i < d_count; i++) {
		int temp;
		cin >> temp;
		c_count += temp;
	}

	cout << c_count;
}