#include <iostream>
#include <cstring>
using namespace std;

/*큰 배열안에 패턴이 몇번있는지 **/
//da10
//isSame 0인것 cnt

int v[9] = { 4,1,2,3,4,1,2,3,3 };
int arr[3] = { 1,2,3 };

int isSame(int index) {
	for (int x = 0; x < 3; x++) {
		if (arr[x] != v[index + x]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int cnt = 0;
	for (int y = 0; y <= 9-3; y++) {
		if (isSame(y)) cnt++;
	}

	cout << cnt << "개 존재";
	return 0;
}
