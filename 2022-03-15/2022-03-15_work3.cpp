//����.3
//
//�����̴� ������ ����.�׷��� ��ҿ� ������ ���� ������ �ִµ� �����̰� ������ ������ Ƚ���� ù��° ������ ����.
//
//�� �����ٺ��ʹ� Ƚ����ŭ ������ ���� ���µ� �����̰� �������� ������ �� ������ ���غ���

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int d_count = 0; // ������ Ƚ��
	int c_count = 0; // ���� ����

	
	cin >> d_count;
	for (int i = 0; i < d_count; i++) {
		int temp;
		cin >> temp;
		c_count += temp;
	}

	cout << c_count;
}