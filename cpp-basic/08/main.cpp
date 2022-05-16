#include <iostream>

using namespace std;

int main() 
{
	// 구조체: 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열: 같은 데이터형의 집합

	// 축구선수
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

	B = {}; // 모든 멤버가 0으로 초기화 된다.

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