#include <iostream>
using namespace std;
/*
3x4map배열은위와 같이하드코딩하고,
2x2pattern배열을입력받아주세요.
그리고 map배열에pattern라는 패턴 배열이존재하는지 확인하고
몇개인지 출력 하면 됩니다.
만약, pattern이존재하고 1개가 발견되었다면"발견(1개)"출력
만약, pattern이 없다면"미발견"출력
*/
//map34 - 전역
//pattern22 입력 전역
//패턴인식 - isSame(y,x) map의 모든 배열 탐색
//direct 00 01 10 11
//

char map[3][5] = {
	"ABGK",
	"TTAB",
	"ACCD"
};
char pattern[2][2];
int direct[4][2] = {
	0,0,
	0,1,
	1,0,
	1,1
};
int isSame(int y, int x) {
	int dy, dx;
	for (int t = 0; t < 4; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 3 || dx >= 4) continue;
		if (map[dy][dx] != pattern[direct[t][0]][direct[t][1]]) return 0;
	}
	return 1;
}
int main() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> pattern[y][x];
		}
	}
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			int ret = isSame(y, x);
			if (ret == 1) {
				cnt++;
			}
		}
	}

	if (cnt > 0) cout << "발견(" << cnt << "개)";
	else cout << "미발견";
	return 0;
}
