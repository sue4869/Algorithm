#include <iostream>
using namespace std;

/*
1.Data구조체를 만들어 주세요.Data구조체의  구성은 아래와 같습니다.
2. 구조체 변수 a, b를 만들어 주세요.
3.a.x ,  a.y , a.z , b.x , b.y , b.z에 6개의 숫자를 순서대로 각각 입력 받습니다.
4. 3줄에 걸쳐 a.x + b.x, a.y + b.y, a.z + b.z의 값을 출력해 주세요.
*/

//구조체 data만들기
int main() {

	struct Data {
		int x;
		int y;
		int z;
	};

	Data a, b;
	cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z;
	cout << a.x + b.x << endl;
	cout << a.y + b.y << endl;
	cout << a.z + b.z << endl;
	return 0;
}
