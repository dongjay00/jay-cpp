#include <iostream>

using namespace std;

int main()
{
	// while��, do while��

	string str = "panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	bool a = true;
	bool b = false;

	/*while (a) {
		cout << "hello\n";
	}
	while (b) {
		cout << "hello\n";
	}*/

	for (int i = 0; i < 3; i++) {
		cout << "for�� �Դϴ�.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while�� �Դϴ�.\n";
		j++;
	}

	/*cout << i << endl;*/
	cout << j << endl;

	// do while
	// ���� �ݺ����� �����ϰ�, ������ ź��
	bool k = false;

	do {
		cout << "while�� �Դϴ�.\n"; // 1�� ��µȴ�.
	} while (k);

	return 0;
}