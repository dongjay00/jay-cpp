#include <iostream>

using namespace std;

int main() {
	// char : ���� ������
	int a = 77;
	char b = a;

	cout << b << endl; // ASCII �ڵ�� �����ȴ�. �� M�� ���.

	char c = 'a';

	cout << c << endl;

	char d;
	d = 'a';

	// ���� ���������� ���� ����ǥ(')�� ��� ����.
	// null ���� ('\0') ������ ������� ��Ģ
	// char b = "a"; �� ��ǻ� a�� null ���� �ΰ��� �� ���̹Ƿ�, ū ����ǥ�� char���� ��� �Ұ�.
	char e[] = { 'a', 'b', 'c' };

	cout << e << endl; // null ���ڰ� ����, abc�� ����� ���Ŀ��� �ǹ̾��� �޸� �Ҹ�� ���� �̻��� ���ڵ��� ��µȴ�.

	char f[] = { 'a', 'b', 'c', '\0' };

	cout << f << endl; // abc

	// ū ����ǥ(")���� ��������� null ���ڰ� ���� -> string !!

	// bool : 0 or 1 (false or true)
	// 0�� �ƴ� ��� ���� 1�� ����

	bool g = 0;
	bool h = 1;
	bool i = 10;

	cout << g << " " << h << " " << i << endl; // 0 1 1

	return 0;
}