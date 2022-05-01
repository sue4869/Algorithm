#include <iostream>
using namespace std;

//v44 0초기화
// 문자, 숫자 입력
// G -> y고정, S -> x고정

int v[4][4] = { 0 };
void check(char ch, int num) {
	if (ch == 'G') {
		for (int x = 0; x < 4; x++) {
			v[num][x] = 1;
		}
	}

	if (ch == 'S') {
		for (int y = 0; y < 4; y++) {
			v[y][num] = 1;
		}
	}
}
int main() {
	
	char ch;
	int num;
	for (int x = 0; x < 3; x++) {
		cin >> ch >> num;
		check(ch, num);
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << v[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
