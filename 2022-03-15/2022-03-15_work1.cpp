//과제.1
//
//안양공고에 다니는 종태는 최근 고민이 있다.
//소수의 패턴이 있지 않을까 ?
//
//여타저타한 공부를 진행해 자연상수(e)에 대해서 알게 되었다
//
//자연 상수(e)는 lim { 0->n }(1 / n)을 진행한 결과이다.
//
//여기서 진원이는 궁금해졌다.
//
//"n만 번을 진행한 자연상수(e)는 얼마일까?"
//
//프로그래밍을 해보자

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "입력 ";
	cin >> n;
	cout << "자연상수(1/" << 1 / (float)(n * 10000) << ")" << endl;
	
	return 0;
}