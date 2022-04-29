#include <iostream>
#include <cstring>
using namespace std;

// da문장에 da2가 있는지 전체 패턴 탐색
char da[10] = "ABFRCBTRV";
char da2[4] = "BTR";
int isSame(int index) {
	for (int y = 0; y < 3; y++) {
		if (da2[y] != da[y + index]) {
			return 0;
		}
	}

	return 1;
}
int main() {
	int len = strlen(da);
	int flag = 0;
	for (int x = 0; x <= len - 3; x++) {
		if (isSame(x)) {
			cout << "O";
			flag = 1;
			break;
		}
	}

	if(!flag) cout << "X";
	return 0;
}
