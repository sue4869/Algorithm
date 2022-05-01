#include <iostream>
using namespace std;
//map하드코딩
//bit 입력받기
//map 모든 배열 탐색 - mask(dy,dx) max비교
//bit중 1인곳 map[dy+y][dx+x] 더하기
int map[3][3] = {
	3,5,1,
	3,8,1,
	1,1,5
};
int bit[2][2];
int mask(int dy, int dx) {
	int sum = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			if (bit[y][x] == 1) {
				sum += map[dy + y][dx + x];
			}
		}
	}
	return sum;
}
int main() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> bit[y][x];
		}
	}
	int max = 0;
	int maxY;
	int maxX;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			int rect = mask(y, x);
			if (rect > max) {
				max = rect;
				maxX = x;
				maxY = y;
			}
		}
	}

	cout << "(" << maxY << "," << maxX << ")";
	return 0;
}