#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 아래 5 x 3 정수 배열을 하드코딩 합니다.
* 2. 1~9사이의 정수 N 1개를 입력 받습니다.
3. 5 x 3 의 정수 배열 내에서 N개가 존재하는 숫자를 출력합니다.
만약 N개가 존재하는 숫자가 두 개 이상이라면, 오름차순으로 출력합니다.
*/

// v35하드코딩
//data10 초기화
//v기준 for data에 v넣기
//n 입력
// data기준 for 
//값이 n인곳 찾기
int main()
{
	int v[3][5] = {
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int data[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			data[v[y][x]]++;
		}
	}
	int n;
	cin >> n;
	for (int x = 0; x < 10; x++) {
		if (data[x] == n) {
			cout << x << " ";
		}
	}

	return 0;
}