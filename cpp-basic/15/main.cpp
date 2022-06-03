#include <iostream>

using namespace std;

int main()
{
	// while문, do while문

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
		cout << "for문 입니다.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while문 입니다.\n";
		j++;
	}

	/*cout << i << endl;*/
	cout << j << endl;

	// do while
	// 먼저 반복문을 실행하고, 조건을 탄다
	bool k = false;

	do {
		cout << "while문 입니다.\n"; // 1번 출력된다.
	} while (k);

	return 0;
}