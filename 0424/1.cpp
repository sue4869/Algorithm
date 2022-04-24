#include <iostream>
#include <cstring>
using namespace std;

/*
*1~65535번의 ID를 가진 사람들이 있습니다.
다음과 같은 정시 출근 기록이 있을 때, 가장 성실하게 출근한 사람의 ID를 출력하는 프로그램을 작성 해주세요.
*/

//data66000초기화
// v34하드코딩
//v기준 for . data에 v넣기
//max, maxindex
//data기준 for. max비교

int main()
{
	int data[66000] = { 0 };
	int v[3][4] = {
		65000,35,42,70,
		70,35,65000,1300,
		65000,30000,38,42
	};
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			data[v[y][x]]++;
		}
	}
	int max = 0;
	int maxIndex = 0;
	for (int x = 0; x < 66000; x++) {

		if (data[x] > max) {
			max = data[x];
			maxIndex = x;
		}
	}

	cout << maxIndex;

	return 0;
}
