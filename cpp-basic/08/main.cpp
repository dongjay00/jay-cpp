#include <iostream>

using namespace std;

int main() 
{
	// ����ü: �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭: ���� ���������� ����

	// �౸����
	// string name;
	// string position;
	// float height;
	// float weight;
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	// MyStruct A;
	// A.name = "Son";
	// A.position = "Striker";
	// A.height = 183;
	// A.weight = 77;

	/*
	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	*/

	B = {}; // ��� ����� 0���� �ʱ�ȭ �ȴ�.

	cout << B.height << endl; // 0

	struct MyStruct2
	{
		string name;
		string position;
		int height;
		int weight;
	};

	MyStruct2 C[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << C[0].height << endl; // 1

	return 0;
}