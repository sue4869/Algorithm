#include <iostream>
#include <cstring>
using namespace std;

/*
*1. vect 문자 배열에 "MINCODING" 문장을 하드 코딩 합니다.
2. 찾을 문자의 개수 n과 n개의 문자들을 입력 받습니다.
3. 입력 받은 문자가 vect 배열에 존재하면 O, 아니면 X를 출력합니다.
*중첩 for문을 활용하지 않고,DAT(Direct Address Table)를 사용해 주세요.
*/
//vect10 하드코딩
//int n 
// for 0~n ch10 입력받기
//data 200 초기화
//vect기준 for data에 vect넣기
// for 0~n
// data에서 찾기
int main() {
	char vect[10] = "MINCODING";
	int n;
	cin >> n;
	char ch[100];
	for (int x = 0; x < n; x++) {
		cin >> ch[x];
	}
	char data[200] = { 0 };
	for (int x = 0; x < 9; x++) {
		data[vect[x]]++;
	}

	for (int x = 0; x < n; x++) {
		if (data[ch[x]] > 0) {
			cout << "O";
		}
		else {
			cout << "X";
		}
	}
	return 0;
}
