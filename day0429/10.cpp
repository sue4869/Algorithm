#include <iostream>
using namespace std;

// 기준점의 대각선 위와 아래 왼쪽 , 대각선 위와 아래 오른쪽, 그리고 기준점까지의 곱구하기 

int main() {
	int v[4][5] = {
		1,1,1,1,1,
		2,2,2,2,2,
		1,0,1,0,1,
		0,1,0,1,0
	};

	int y = 1;
	int x = 1;

	int direct[5][2] = {
		-1,-1,
		-1,1,
		0,0,
		1,-1,
		1,1
	};
	int gup = 1;
	for(int t=0;t<5;t++){
		int dy = y + direct[t][0];
		int dx = x + direct[t][1];

		if (dy < 0 || dy >= 4 || dx < 0 || dx >= 5) {
			continue;
		}
		gup *= v[dy][dx];
	}
	cout << gup;
	return 0;
}
