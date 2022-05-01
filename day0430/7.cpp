#include <iostream>
using namespace std;

/*
1. 4쌍의 (y, x) 좌표를 input 배열에 입력 받습니다.
2. 4 x3 크기의 vect 배열을 만들고, 모든 값을 0으로 초기화합니다.
3. vect배열에서 input 배열에 포함된 좌표에 해당하는 곳을 '5'로 바꿔줍니다.
4. 모든 좌표를 바꾼 후 vect 배열을 출력합니다.
추가(1). 구조체 배열을 활용하여 입력 받고, 출력해 보세요.
*/

struct Coord {
	int y;
	int x;
};


int main() {
	int vet[4][3] = { 0 };
	Coord input[4];

	for (int t = 0; t < 4; t++) {
		cin >> input[t].y >> input[t].x;
		
	}
	int dy, dx;
	for (int t = 0; t < 4; t++) {
		dy = input[t].y;
		dx = input[t].x;

		vet[dy][dx] = 5;
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			cout << vet[y][x]<<" ";
		}
		cout << endl;
	}
	return 0;
}