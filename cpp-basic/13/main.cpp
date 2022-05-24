#include <iostream>

using namespace std;

int main() 
{
	// 반복문이란?
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;

	// 지금은 원소 갯수가 5개 밖에 안되지만...

	for (int i = 0; i < 5; i++) {
		// code
		cout << i << "번째입니다." << endl;
	};
	/*
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행합니다.
	4. 카운터의 값을 변화합니다.
	*/

	return 0;
}