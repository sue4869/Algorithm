#include <iostream>
#include <cstring>
using namespace std;

/*
*cardlist 배열에 여러 종류의 카드가 있습니다.
1. 대문자 알파벳으로 구성된 카드 문장을 입력 합니다.문장의 길이는 최대 15입니다.
2. 입력한 카드에서 총 몇 종류의 카드가 있는지를 찾아 출력합니다.
* DAT (Direct Address Table)을 사용하여 풀어 주세요.
*/

//input16 입력
//input 길이
//data200 초기화
//input기준 for data에 input넣기
//cnt이용
//data기준 for . 값>0 찾기
int main()
{
	char input[16];
	cin >> input;
	int len = strlen(input);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[input[x]]++;
	}
	int cnt = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			cnt++;
		}
	}
	cout << cnt << "개";
	return 0;
}