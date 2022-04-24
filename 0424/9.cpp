#include <iostream>
#include <cstring>
using namespace std;

/*
*다음과 같은 아파트가 있습니다.
맨 아래는 1층 [15 2 6]이고, 맨 위 층은 5층 [15 18 17] 입니다.
해당 아파트를 하드 코딩 해 주세요.
그리고 특정 세대가 사는 층이 어떤 층인지 찾으려고 합니다.
family 배열에 숫자 3개를 입력 받은 후, 이와 일치하는 세대가 어떤 층에 사는지를 출력해 주세요.
* isPattern 함수를 구현하여 풀어 주세요.
*/
//apt53 하드코딩
//family3 입력받기
// isPattern함수 family배열 넣기
// 인덱스 0비교 apt, family 
int apt[5][3] = {
	15,18,17,
	4,6,9,
	10,1,3,
	7,8,9,
	15,2,6
};

int isPattern(int fam[3]) {
	for (int y = 0; y < 5; y++) {
		if (apt[y][0] == fam[0]) {
			return 5 - y;
		}
	}
}

int main()
{
	int family[3];
	for (int x = 0; x < 3; x++) {
		cin >> family[x];
	}
	int floor = isPattern(family);

	cout << floor << "층";
	return 0;
}
