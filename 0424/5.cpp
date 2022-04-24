#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 8글자의 대문자 알파벳으로 구성된 문장을 입력 하세요.
2. 입력한 문장에서 가장 많이 사용된 알파벳을 출력하세요.
*/
//v9 입력받기
//data200초기화
//for v기준 data에 v넣기
//max maxIndex 선언
// data기준 for 
// 비교
int main()
{
	char v[9];
	cin >> v;
	char data[200] = { 0 };
	for (int x = 0; x < 8; x++) {
		data[v[x]]++;
	}

	int max = 0;
	int maxIndex = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] > max) {
			max = data[x];
			maxIndex = x;
		}
	}

	cout << (char)maxIndex;
	return 0;
}
