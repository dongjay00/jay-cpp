#include <iostream>

using namespace std;

int main() {
	// char : 작은 문자형
	int a = 77;
	char b = a;

	cout << b << endl; // ASCII 코드로 대응된다. 즉 M이 출력.

	char c = 'a';

	cout << c << endl;

	char d;
	d = 'a';

	// 작은 문자형에는 작은 따옴표(')만 사용 가능.
	// null 문자 ('\0') 때문에 만들어진 규칙
	// char b = "a"; 는 사실상 a와 null 문자 두개가 들어간 꼴이므로, 큰 따옴표는 char에서 사용 불가.
	char e[] = { 'a', 'b', 'c' };

	cout << e << endl; // null 문자가 없어, abc를 출력한 이후에도 의미없는 메모리 소모로 인해 이상한 문자들이 출력된다.

	char f[] = { 'a', 'b', 'c', '\0' };

	cout << f << endl; // abc

	// 큰 따옴표(")에는 명시적으로 null 문자가 포함 -> string !!

	// bool : 0 or 1 (false or true)
	// 0이 아닌 모든 값은 1로 저장

	bool g = 0;
	bool h = 1;
	bool i = 10;

	cout << g << " " << h << " " << i << endl; // 0 1 1

	return 0;
}