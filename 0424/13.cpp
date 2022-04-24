#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	/*
	* 하마는 여러충치를 가지고 있는데, 입을 닫으면 이빨끼리 부딪칩니다.
	 이때 충치끼리 닿으면 하마가 아파합니다. up 2번치아와 down 2번치아는 충치라서 닿으면 하마가 고통을 느낍니다.
	 윗니와 아랫니 상태를 입력받고,고통을 느끼는 치아의 갯수를 출력하세요.
	 */

	// bit1 bit2 입력받기
	// 두 배열 다 1인곳 찾기 cnt
	int bit1[5];
	int bit2[5];
	for (int x = 0; x < 5; x++) {
		cin >> bit1[x];
	}
	for (int x = 0; x < 5; x++) {
		cin >> bit2[x];
	}
	int cnt = 0;
	for (int x = 0; x < 5; x++) {
		if (bit1[x] == 1 && bit2[x] == 1) {
			cnt++;
		}
	}
	cout << cnt << "개";

	return 0;
}	
