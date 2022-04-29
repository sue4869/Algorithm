#include <iostream>
#include <cstring>
using namespace std;


//이중배열에서 이중배열 패턴 찾기

//처음에 y=0고정 x 0~2까지 보내기
//issame에 x 보내기
//타겟배열 만큼 돌리기
int v[2][4] = {
	4,5,4,5,
	5,5,4,5
};
int target[2][2] = {
	4,5,
	4,5
};
int isSame(int dx) {
	for (int k = 0; k < 2; k++) {
		for (int m = 0; m < 2; m++) {
			if (target[k][m] != v[ k][dx + m]) {
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	int cnt = 0;
	for (int x = 0; x <= 2; x++) {
		if (isSame(x)) cnt++;
	}

	cout << cnt;
	return 0;
}

