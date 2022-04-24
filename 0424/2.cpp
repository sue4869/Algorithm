#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 3x3 배열에 들어갈 정수 9개를 입력받습니다.
2. 1~9까지의 숫자 중, 어떤 숫자들이 배열에 없는지를 찾아,"오름차순"으로 출력해 주세요.
* 정렬 알고리즘, STL 사용하지 않고, DAT를 사용해 주세요.
*/

//v33 
//data10 초기화
//v입력받기
//data기준 for. 값 ==0 찾기
int main()
{
	int v[3][3];
	int data[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> v[y][x];
			data[v[y][x]]++;
		}
	}

	for (int x = 1; x < 10; x++) {
		if (data[x] == 0) {
			cout << x << " ";
		}
	}


	return 0;
}
