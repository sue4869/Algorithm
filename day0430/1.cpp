#include <iostream>
using namespace std;

/*위 3x3 배열을하드코딩해주세요.그리고 좌표 하나를 입력 받아주세요.(y, x)
입력 받은 좌표에서 바로 윗칸, 아랫칸, 왼쪽칸, 오른쪽칸의합을 Direct 기법을 이용해서 출력 해 주세*/

//v33하드코딩
// 좌표 입력받기
//direct42 하드코딩
//4번 반복. 합 구하기
// 조건문 범위 0보다 크고 2보다 작게

int main() {
	int v[3][3] = {
		3,5,4,
		1,1,2,
		1,3,9
	};
	int x, y;
	cin >> y >> x;
	int direct[4][2] = {
		-1,0,
		0,-1,
		0,1,
		1,0
	};
	int dy, dx;
	int sum = 0;
	for (int t = 0; t < 4; t++) {
		dy = y + direct[t][0];
		dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy > 2 || dx > 2) {
			continue;
		}
		sum += v[dy][dx];
	}

	cout << sum;
	return 0;
}
