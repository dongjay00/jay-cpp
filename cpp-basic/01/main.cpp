#include <iostream> // 전처리 지시자

/* 빌드 + 실행 단축키: F5 */

/*
c++에서 함수를 사용하고자 한다면...?
반드시 그 함수의 원형을 미리 정의하여야 합니다.
*/

/*
';'가 종결자의 역할을 한다.
*/

using namespace std;
// 위 문구가 없다면, std::cout std::endl 이런식으로 입력해야 동작

int main() {
	/*
	c++ 코드에는 반드시
	main의 이름을 가지고 있는 함수가 있어야 한다.
	*/

	/*
	cout: 출력
	endl: 줄바꿈
	<<: 데이터 흐름의 방향
	*/
	cout << "Hello";
	cout << "World!" << endl;

	return 0;
}