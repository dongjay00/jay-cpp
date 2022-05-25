#include <iostream>

using namespace std;

int main() 
{
	for (int i = 5; i > 0; i--) {
		// code
		cout << i << "번째입니다." << endl;
	};
	
	// 증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는" << a++ << endl; // 10
	cout << "++b는" << ++b << endl; // 11
	cout << "a는 " << a << ", b는 " << b << endl; // 11, 11

	// 판단하고 증가시킬지, 증가시키고 판단하는지

	/*
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다
	*/


	return 0;
}