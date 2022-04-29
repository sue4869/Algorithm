#include <iostream>
using namespace std;

// 기준점의 왼쪽 오른쪽 아래 대각선아래 중 최대값 구하기
int main() {
	int v[4][5] = {
		1,1,1,1,1,
		2,2,2,2,2,
		1,0,1,0,1,
		0,1,0,1,0
	};

	int y = 1;
	int x = 1;

	int direct[4][2] = {
		0,-1,
		0,1,
		1,0,
		1,1
	};
	int max = 0;
	for (int t = 0; t < 4; t++) {
		int dy = y + direct[t][0];
		int dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 4 || dx >= 5) {
			continue;
		}
		if (v[dy][dx] > max) {
			max = v[dy][dx];
		}
	}

	cout << max;

	
	return 0;
}