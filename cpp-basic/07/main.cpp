#include <iostream>
#include <cstring> // strlen() 함수를 사용하기 위해서

using namespace std;

int main() 
{
	const int Size = 15;
	char name1[Size];  // 비어있는 배열
	char name2[Size] = "C++programing";  // 문자열 상수로 초기화된 배열

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";
	// cin >> name1;
	// cin.get(name1, Size);
	cin.getline(name1, Size);
	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이" << name1[0] << "자로 시작하는군요.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;

	// 1. 만약 공백(\0)이 입력된다면, 공백 이후 문자열은 무시된다. cin은 공백이 문자열의 끝이라고 인식하기 때문
	// 2. get이나 getline을 활용한다


	// C++에서 문자열을 다루는 방법 중 하나인 string
	/*
	C스타일로 string 객체를 초기화할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
	*/
	// string과 문자열은 기본적으로 동등. 그러나...
	
	// string 만의 특징
	// 배열은 다른 배열에 통째로 대입할 수 없다.
	// >> string에서는 이것이 가능!

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	// char1 = char2; // 불가능
	str1 = str2; // 가능

	cout << str1 << endl; // panda
	cout << str1[0] << endl; // p

	return 0;
}