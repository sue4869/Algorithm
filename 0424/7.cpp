#include <iostream>
#include <cstring>
using namespace std;

/*
*5 x 3 칸에 알파벳들이 채워져 있습니다.이 알파벳들을 정렬해서 한 줄로 출력 해주세요.
* 정렬 알고리즘, STL, 문자열은 활용하지 않습니다. DAT (Direct Address Table)을 활용하여 풀어 주세요.
*/

//v54하드코딩
//data200 초기화
//data에 v넣기 v기준 for문
// data기준for문 -> data값 >0인것중 해당 data값만큼 반복시기기 

int main()
{
	char v[5][4] = {
		"ABC",
		"AGH",
		"HIJ",
		"KAB",
		"ABC"
	};

	char data[200] = { 0 };
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			data[v[y][x]]++;
		}
	}

	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			for (int y = 0; y < data[x]; y++) {
				cout << (char)x;
			}
		}
	}
	return 0;
}