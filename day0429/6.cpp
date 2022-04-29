#include <iostream>
#include <cstring>
using namespace std;

//다중배열에서 이중배열 패턴찾기
char v[4][5] = {
	"ABAB",
	"BTBT",
	"KABK",
	"KBTK"
};

char arr[2][3] = {
	"AB",
	"BT"
};

int isSame(int dy, int dx) {

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (arr[y][x] != v[dy + y][dx + x]) {
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (isSame(y, x)) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
