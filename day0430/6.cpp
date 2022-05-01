#include <iostream>
using namespace std;

/*
위와 같이 같은 train배열에 사람들이 타고 있습니다. 배열은 Train 구조체로 이루어져 있습니다.
각 Train의 win에는 나이가,name에는 이름이 적혀 있습니다. name은 최대 8글자로 이루어져 있습니다.
tom은 첫사랑을 찾기 위해 이 기차를 탔습니다.
tom의 첫사랑 이름과 나이를 입력 받고, 첫 사랑이 몇 번 칸에 있는지 찾아 출력 해주세요.
추가(1). isSame 함수를 만들어 문장 a와 문장 b가 같은지 확인해 주세요.
*/

struct Train {
	int win;
	char name[8];
};

Train train[7] = {
	{15,"summer"},
	{33,"cloe"},
	{24,"summer"},
	{28,"niki"},
	{32,"jenney"},
	{20,"summer"},
	{40,"coco"}
};
int isSame(char a[8], char b[8]) {
	int x;
	int alen = 0;
	int blen = 0;
	for (x = 0; x < 8; x++) {
		if (a[x] == '\0') {
			alen = x;
			break;
		}
	}

	for (x = 0; x < 8; x++) {
		if (b[x] == '\0') {
			blen = x;
			break;
		}
	}

	if (alen != blen) return 0;
	for (x = 0; x < alen; x++) {
		if (a[x] != b[x]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int age;
	char loveName[8];
	cin >> loveName >> age;
	for (int x = 0; x < 7; x++) {
		if (!isSame(train[x].name, loveName)) continue;
		if (train[x].win == age) {
			cout << x;
			break;
		}
	}

	return 0;
}
