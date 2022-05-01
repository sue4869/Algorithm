#include <iostream>
using namespace std;
/*
5x4 배열에 0 또는 1로 구성된 숫자들을 입력받아주세요.
입력받은 배열에 있는 숫자 1은 세포를 뜻합니다.
세포 1주변에 아무것도 없으면 세포들이 안정된 상태입니다.
즉, 8방향 모두 아무런 숫자가 없어야 합니다.
아래 예제를 참고하여,
입력받은 세포상태가 "안정된 상태"인지"불안정한 상태"인지 출력하세요.
*/

int v[5][4];
int direct[8][2] = {
	-1,-1,
	-1,0,
	-1,1,
	0,-1,
	0,1,
	1,-1,
	1,0,
	1,1
};
int check(int y, int x) {
	int dy, dx;
	int flag = 1;
	for (int t = 0; t < 8; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];
		if (dy < 0 || dx < 0 || dy >= 5 || dx >= 4) continue;
		if (v[dy][dx] == 1) {
			return 0;
			
		}
	}
	return 1;
}
int main() {
	
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> v[y][x];
		}
	}
	int rect = 1;
	int flag = 1;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			if (v[y][x] == 1) rect = check(y, x);
			if (!rect) {
				flag = 0;
				cout << "불안정한 상태";
				break;
			}
		}
		if (!flag) break;
	}

	if (flag) cout << "안정된 상태";
	return 0;
}
