#include <iostream>
using namespace std;

//배열중 한 지점을 기준으로 위아래오른쪽왼쪽을 합한 값 구하기
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
		-1,0,
		1,0,
		0,1,
		0,-1
	};
	int sum = 0;
	for (int t = 0; t < 4; t++) {
		int dy = y + direct[t][0];
		int dx = x + direct[t][1];
		if (dy >= 0 && dy < 4 && dx >= 0 && dx < 4) {
			sum += v[dy][dx];
		}
		
	}
	cout << sum;
	return 0;
}