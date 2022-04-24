#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 3x3 town배열을 하드코딩 해주세요.
2. 블랙리스트 네명을 입력받아 black 배열에 저장해 주세요.
3. town에 블랙리스트에 해당하는 사람이 몇 명 있는지 출력하세요.
*/

//town34 하드코딩
// black 입력받기 - data에 black넣기
//data초기화
// town기준 for문 data[town] > 0찾기
//cnt이용
int main()
{
	char town[3][4] = {
		"CDA",
		"BMZ",
		"QPO"
	};
	char black[4];
	char data[200] = { 0 };
	for (int y = 0; y < 4; y++) {
		cin >> black[y];
		data[black[y]]++;
	}
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (data[town[y][x]] > 0) {
				cnt++;
			}
		}
	}

	cout << cnt << "명";
	return 0;
}