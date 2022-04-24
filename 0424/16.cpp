#include <iostream>
#include <cstring>
using namespace std;
/*
*세 문장을 입력받고
같은글자가 한글자라도 없으면 Perfect
아니면 No를 출력 해 주세요.
*/

// a10 b10 c10 입력
// alen blen clen 길이구하기
// 각각 기준으로 다 data에 넣기
// >2면 flag = 1
int main() {
	char a[10], b[10], c[10];
	cin >> a >> b >> c;
	int alen = strlen(a);
	int blen = strlen(b);
	int clen = strlen(c);
	char data[200] = { 0 };
	int x;
	for (x = 0; x < alen; x++) {
		data[a[x]]++;
	}
	for (x = 0; x < blen; x++) {
		data[b[x]]++;
	}
	for (x = 0; x < clen; x++) {
		data[c[x]]++;
	}
	int flag = 0;
	for (int x = 0; x < 200; x++) {
		if(data[x]>=2) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "No";
	else cout << "Perfect";
	return 0;
}

