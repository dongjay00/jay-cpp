#include <iostream>

using namespace std;

int main() 
{
	for (int i = 5; i > 0; i--) {
		// code
		cout << i << "��°�Դϴ�." << endl;
	};
	
	// ���� ������, ���� ������
	int a = 10;
	int b = 10;

	cout << "a�� " << a << ", b�� " << b << endl;
	cout << "a++��" << a++ << endl; // 10
	cout << "++b��" << ++b << endl; // 11
	cout << "a�� " << a << ", b�� " << b << endl; // 11, 11

	// �Ǵ��ϰ� ������ų��, ������Ű�� �Ǵ��ϴ���

	/*
	< : �۴�
	<= : �۰ų� ����
	> : ũ��
	>= : ũ�ų� ����
	== : ����
	!= : ���� �ʴ�
	*/


	return 0;
}