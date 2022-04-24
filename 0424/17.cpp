#include <iostream>
#include <cstring>
using namespace std;

/*
*
한문장을 입력받고, 중복 알파벳을 제거한 후알파벳 순서대로 출력해주세요.
(A~F글자, 최대 10글자,direct address table 자료구조를이용해주세요)
*/
//v11입력
//data 200 초기화
//v기준 data에 넣기 =1
// ==1인 index cout

int main() {
	char v[11];
	cin >> v;
	int len = strlen(v);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]] = 1;
	}
	for (int x = 0; x < 200; x++) {
		if (data[x] == 1) {
			cout << (char)x;
		}
	}
	return 0;
}