#include <iostream>
using namespace std;
/*
1. 아래와 같은 형태의  MC 구조체를 정의해 주세요.
2. bob, tom 두개의 구조체 변수를 만들어 주세요.
3. bob, tom이 주문할 각각 2개의 햄버거, 총 4개를 입력 받아 bob, tom에게 아래와 같이 저장해 주세요
처음 두 개는 bob, 마지막 2개는 tom이 주문한 햄버거입니다.
4. 마지막으로 bob과 tom이 각각 주문한 햄버거의 길이를 출력합니다
*/

struct MC {
	char burger1[8];
	char burger2[8];
};

int getLength(char v[8]) {
	for (int x = 0; x < 8; x++) {
		if (v[x] == '\0') {
			return x;
		}
	}
	return 0;
}
int main() {

	MC bob;
	MC tom;
	cin >> bob.burger1 >> bob.burger2 >> tom.burger1 >> tom.burger2;

	cout << "bob.burger1=" << getLength(bob.burger1) << endl;
	cout << "bob.burger2=" << getLength(bob.burger2) << endl;
	cout << "tom.burger1=" << getLength(tom.burger1) << endl;
	cout << "tom.burger2=" << getLength(tom.burger2) << endl;
	return 0;
}