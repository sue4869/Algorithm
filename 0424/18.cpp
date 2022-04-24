#include <iostream>
#include <cstring>
using namespace std;

/*
*한문장을 입력받고,각 글자마다 수를 출력해주세요.
최대 10글자 까지 입력될 수 있습니다
(DirectAddressTable을이용해주세요)
*/

//v11 입력
// 길이구하기
//data200 초기화
// v기준 for data에 v넣기
// data기준 >0 cout
int main() {
	char v[11];
	cin >> v;
	int len = strlen(v);
	int data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]]++;
	}
	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			cout << (char)x << ":" << data[x] << endl;
		}
	}
	return 0;
}
