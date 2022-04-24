#include <iostream>
#include <cstring>
using namespace std;
/*
*한 문장을 입력 받으세요.
한 문장에서 GHOST 단어가 존재하는지 찾아서 출력 해 주세요.
QGHOSTA를 입력 받았다면
입력받은 문장안에 GHOST 가 존재 하므로존재를 출력 해 주세요.
ABGOSAT를 입력 받았다면
입력받은 문장안에 GHOST가 존재 하지 않으므로존재하지 않음을 출력 해 주세요.
*/

int main() {
	char v[10];
	cin >> v;
	char check[6] = "GHOST";
	int len = strlen(v);
	int flag = 0;
	for (int x = 0; x < len; x++) {
		if (v[x] == check[0]) {
			flag = 1;
			for (int y = 0; y < 5; y++) {
				if (v[x++] != check[y]) {
					flag = 0;
					break;
				}
			}
		}
	}
	if (flag) cout << "존재";
	else cout << "존재하지 않음";

	return 0;
}