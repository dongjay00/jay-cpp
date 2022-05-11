#include <iostream>
#define PIE 3.1415926535 // C 스타일의 상수 선언법

using namespace std;

int main() {
	// 원의 넓이를 구하는 프로그램
	
	int r = 3;
	float s = r * r * 3.14;

	cout << s << endl;

	// 1. 바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// 상수!

	float s1 = r * r * PIE;

	cout << s1 << endl;

	// C++ 방식의 상수 선언법
	const float PIE2 = 3.1415926535;
	float s2 = r * r * PIE2;

	cout << s2 << endl;

	// 상수는 재할당 불가능
	// 상수는 초기화 방식만 가능

	// 데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/

	int a = 3.141592;
	cout << a << endl; // 3

	// 강제적으로 데이터형 변환
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; // 77 77

	// C++
	// static_cast<typeName>
	cout << static_cast<int>(ch) << endl; // 77

	return 0;
}