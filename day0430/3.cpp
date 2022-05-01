#include <iostream>
using namespace std;

/*
4 x 5 사이즈의 맵(문자 배열)을 준비합니다. 모든 칸의 값은 '_' (언더바)로 채워줍니다.
그리고 폭탄을 투하할 좌표(Y, X) 두 곳을 입력 받아주세요. 그리고 두 폭탄이 터진 후의 맵을 출력해 주세요.
폭탄이 터지면 상하좌우, 그리고 대각선 방향이 '#'으로 표시됩니다.
*/

//char v46 전역 
// fx, fy, sx,sy 입력받기
//함수 bom(x,y) 리턴 없음
//direct 82 -1-1,-10,-11,0-1,01,1-1,10,11
//8번반복

char v[4][6] = { "_____","_____","_____","_____"};
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

void bom(int y, int x) {
	int dy, dx;

	for (int t = 0; t < 8; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5) continue;

		v[dy][dx] = '#';
	}

}
int main() {

	int fy, fx, sy, sx;
	cin >> fy >> fx >> sy >> sx;
	bom(fy, fx);
	bom(sy, sx);

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 5; x++) {
			cout << v[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
