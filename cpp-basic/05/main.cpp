#include <iostream>
#define PIE 3.1415926535 // C ��Ÿ���� ��� �����

using namespace std;

int main() {
	// ���� ���̸� ���ϴ� ���α׷�
	
	int r = 3;
	float s = r * r * 3.14;

	cout << s << endl;

	// 1. �ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// ���!

	float s1 = r * r * PIE;

	cout << s1 << endl;

	// C++ ����� ��� �����
	const float PIE2 = 3.1415926535;
	float s2 = r * r * PIE2;

	cout << s2 << endl;

	// ����� ���Ҵ� �Ұ���
	// ����� �ʱ�ȭ ��ĸ� ����

	// �������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int a = 3.141592;
	cout << a << endl; // 3

	// ���������� �������� ��ȯ
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; // 77 77

	// C++
	// static_cast<typeName>
	cout << static_cast<int>(ch) << endl; // 77

	return 0;
}