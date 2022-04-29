#include <iostream>
#include <cstring>
using namespace std;

//이중배열에서 패턴 찾기
int v[3][5] = {
	4,5,1,9,1,
	2,2,3,1,9,
	1,3,1,9,1
};
int arr[3] = { 1,9,1 };

int isSame(int line ,int index) {
	for (int m = 0; m < 3; m++) {
		if (arr[m] != v[line][index + m]) {
			return 0;
		}
	}

	return 1;
}
int main() {
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x <= 2; x++) {
			if (isSame(y, x)) cnt++;
		}
	}

	cout << cnt;
	return 0;

}