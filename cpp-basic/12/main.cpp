#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define SIZE 20

struct MyStruct
{
	char name[20];
	int age;
};

int main() 
{
	using namespace std;

	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; // 동적 구조체 (컴파일 시간이 아닌 실행 시간에 메모리 대입
	strcpy(ps, animal);

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	// 동적 구조체
	// temp* ps = new temp;

	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살 이군요!";

	return 0;
}