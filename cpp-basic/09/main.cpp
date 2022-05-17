#include <iostream>

using namespace std;

int main() 
{
	// ����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.

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

	// �� ���� �� ������ �����Ѵ�

	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };

	/*
	1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	2. red, orange, yellow.. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.
	*/

	spectrum a = orange;
	cout << a << endl; // 1

	// �����ڵ鳢���� ��������� �Ұ���
	// spectrum a = orange + violet (x)

	// int ���� �����Ͽ� ����ϴ� ����� ����!
	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	// �����ڿ� �̸� ���� �Ҵ� ����.
	// �̶� �ݵ�� ������ �Ҵ� �����ϴ�.
	// enum spectrum { red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet };
	// �Ҵ����� ���� ������ �� ���� ���� +1�� ���� ������. �� green�� 5, blue�� 6, violet�� 7... �̷����̴�.

	return 0;
}