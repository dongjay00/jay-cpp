#include <iostream>

using namespace std;

int main() 
{
	// 공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl; // 3
	test.longVal = 33;
	std::cout << test.intVal << std::endl; // 33
	std::cout << test.longVal << std::endl; // 33
	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl; // 1079194419
	std::cout << test.longVal << std::endl; // 1079194419
	std::cout << test.floatVal << std::endl; // 3.3

	// 한 번에 한 가지만 보관한다

	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법.

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };

	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
	*/

	spectrum a = orange;
	cout << a << endl; // 1

	// 열거자들끼리의 산술연산은 불가능
	// spectrum a = orange + violet (x)

	// int 형에 대입하여 사용하는 방식은 가능!
	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	// 열거자에 미리 값을 할당 가능.
	// 이때 반드시 정수만 할당 가능하다.
	// enum spectrum { red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet };
	// 할당하지 않은 값들은 그 이전 값에 +1한 값을 가진다. 즉 green은 5, blue는 6, violet은 7... 이런식이다.

	return 0;
}