#include <iostream>
#include <cstring>
using namespace std;

/*
*고등학교의 알고리즘 팀에 선발된 학생 3명이 전국대회 출전을 위해 기차를 타고 대회장으로 가고 있습니다.
팀원들의 좌석은 순서대로 붙어 있습니다.
팀원들의 번호 3개를 입력 받아,  팀원들이 어느 칸의 구간에 앉아 있는지를 찾아 출력해 주세요.
기차의 칸은 0번부터 시작합니다.
*/

//train8하드코딩
//team3입력받기
// seat 0 초기화
//train for문 돌기. team0값과 일치하는 인덱스 찾기

int main()
{
	int train[8] = {
		3,7,6,4,2,9,1,7
	};
	int team[3];
	cin >> team[0] >> team[1] >> team[2];
	int seat = 0;
	for (int x = 0; x < 8; x++) {
		if (train[x] == team[0]) {
			seat = x;
			break;
		}
	}
	cout << seat << "번~" << seat + 2 << "번 칸";
	return 0;
}