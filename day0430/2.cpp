#include <iostream>
using namespace std;
/*
map 배열을 하드코딩 해주세요.
그리고 map에서 대각선 방향(왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래)의 합이 가장 큰 값이 나오는 좌표(y, x)를 출력하세요.
단, 대각선 방향의 합을 구하는 sum(y, x) 함수를 만들어서 사용해 주세요.
sum(y, x)는 특정 좌표 (y, x)에서 대각선 방향의 합을 반환하는 함수입니다.
*/

//map55 하드코딩 전역
//direct -1-1 -11 1-1 11 전역
//모든 mapy,x 좌표를 sum함수로 return sum
// dy dx 만들기
//조건문 0보다작거나 5이상일경우 안됨
//max 구하기

int map[5][5] = {
	3,3,5,3,1,
	2,2,4,2,6,
	4,9,2,3,4,
	1,1,1,1,1,
	3,3,5,9,2
};
int direct[4][2] = {
	-1,-1,
	-1,1,
	1,-1,
	1,1
};
int sum(int x, int y) {
	int sumResult = 0;
	int dy, dx;
	for (int t = 0; t < 4; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 5 || dx >= 5) {
			continue;
		}
		sumResult += map[dy][dx];
	}
	return sumResult;
}
int main() {
	int max = 0;
	int maxIndexX = 0;
	int maxIndexY = 0;
	int ret;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			ret = sum(x, y);
			if (ret > max) {
				max = ret;
				maxIndexX = x;
				maxIndexY = y;
			}
		}
	}

	cout << maxIndexY << " " << maxIndexX;
	return 0;
}
