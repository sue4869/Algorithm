#include <iostream>
using namespace std;
/*
1. 4 x 4 image 배열에 숫자를 입력 받아 주세요.
2. 특정 좌표로부터 2 x 3의 크기의 합을 구하는 함수 rectSum(y, x)을 만들어 주세요.
예를 들어 rectSum(0, 0)을 호출하면, 아래와 같이 (0, 0)으로부터 2 x 3크기를 반환합니다.
(1 + 5 + 5 + 4 + 2 + 1  = 18)
3. rectSum 함수를 활용하여 image 배열에서 2 x 3 크기의 합이 최대인 좌표를 찾아 출력해 주세요.
좌표는 2 x 3 크기의 가장 왼쪽 위 좌표를 기준으로 출력합니다.
*/

int image[4][4];
int direct[6][2] = {
	0,0,
	0,1,
	0,2,
	1,0,
	1,1,
	1,2
};
int rectSum(int y, int x) {
	int dy, dx;
	int sum = 0;
	for (int t = 0; t < 6; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 4) continue;
		sum += image[dy][dx];
	}

	return sum;
}
int main() {


	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> image[y][x];
		}
	}
	int max = 0;
	int maxY, maxX;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			int rect = rectSum(y, x);
			if (rect > max) {
				max = rect;
				maxY = y;
				maxX = x;
			}
		}
	}
	cout << "(" << maxY << "," << maxX << ")";
	return 0;
}
