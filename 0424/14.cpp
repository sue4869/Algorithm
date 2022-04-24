#include <iostream>
#include <cstring>
using namespace std;

/*
*win 배열에 합격자 명단이 있습니다.
people의 번호를 입력받고,
네명의 합격 여부를 출력 해주세요
*/
int main()
{
	// win23 하드코딩
	// people4 입력받기
	//win 기준 for. data10에 win 넣기
	// people기준 for. data > 0 이면 합격 아니면 불합격

	int win[2][3] = {
		3,5,1,
		4,2,6
	};
	int people[4];
	for (int x = 0; x < 4; x++) {
		cin >> people[x];
	}
	int data[10] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			data[win[y][x]]++;
		}
	}
	for (int x = 0; x < 4; x++) {
		cout << people[x] << "번";
		if (data[people[x]] > 0) {
			cout << " 합격\n";
		}
		else {
			cout << " 불합격\n";
		}
	}
	return 0;
}
