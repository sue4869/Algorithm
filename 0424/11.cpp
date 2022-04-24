#include <iostream>
#include <cstring>
using namespace std;

/*
*6개 숫자를 입력받으세요.
같은 숫자가 존재하는지 확인하고 출력 해주세요.
존재O  =>"도플갱어 발견"출력
존재X  =>"미발견"출력
*/

// v6 입력받기
//data10 초기화
//data에 v 넣기
// data값 >=2 찾기 flag 이용

int main()
{
	int v[6];
	for (int x = 0; x < 6; x++) {
		cin >> v[x];
	}

	int data[10] = { 0 };
	for (int x = 0; x < 6; x++) {
		data[v[x]]++;
	}
	int flag = 0;
	for (int x = 0; x < 10; x++) {
		if (data[x] >= 2) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "도플갱어 발견";
	else cout << "미발견";
	return 0;
}