//����.2
//
//�����̴� ���� �ڽ��� �����Կ� ���ؼ� �ñ��Ѱ� ����.
//
//�������� Ű�� 170cm�̴�.
//
//�ڽ��� ������ �˱����ؼ� BMI ��ġ�� ����� BMI�� ���� ������ ���غ���

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int weight;
	cout << "�����Ը� �Է����ּ���: ";
	cin >> weight;
	
	int bmi = weight / (1.7 * 1.7);

	if (bmi >= 25) {
		cout << "��";
	}
	else if (bmi >= 23) {
		cout << "�浵��";
	}
	else if(bmi >= 18.5){
		cout << "����";
	}
	else {
		cout << "��ü��";
	}

	return 0;
}