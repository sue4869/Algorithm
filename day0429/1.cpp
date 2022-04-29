#include <iostream>
#include <cstring>
using namespace std;

//da문장에 da2가 있는지 패턴 탐색 (기초)
char da[6] = "ABTRC";
char da2[4] = "BTR";
int isSame(int index) {
	int t = 0;
	for (int y = 0; y < 3; y++) {
		if (da2[y] != da[index + y]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	if (isSame(1)) cout << "O";
	else cout << "X";

	return 0;
}
