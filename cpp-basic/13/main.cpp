#include <iostream>

using namespace std;

int main() 
{
	// �ݺ����̶�?
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;

	// ������ ���� ������ 5�� �ۿ� �ȵ�����...

	for (int i = 0; i < 5; i++) {
		// code
		cout << i << "��°�Դϴ�." << endl;
	};
	/*
	1. �ݺ����� ����� ī������ ���� �ʱ�ȭ
	2. �ݺ����� ������ ������ '���� �˻�'
	3. �ݺ��� ��ü�� �����մϴ�.
	4. ī������ ���� ��ȭ�մϴ�.
	*/

	return 0;
}