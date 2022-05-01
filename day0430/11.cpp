#include <iostream>
using namespace std;

/*
1~16 사이의 숫자 4개를 입력받고 배열에 채워주세요.
총 16칸짜리인4x4 배열을 만들어 주세요.
4x4 배열에 아래와 같이 번호를 매긴다고 했을때
입력받은 숫자 4개에 해당하는 번호에값을 1부터 순차적으로 채워준 후 출력해주세요.
아래 예제를 참고하여 소스코드를 작성해주세요.
*/
//숫자4입력 - input배열4
//v44 0초기화
//cnt 도입
//cnt = input 숫자 num입력

int main() {
	int input[4];
	for (int x = 0; x < 4; x++) {
		cin >> input[x];
	}
	int v[4][4] = { 0 };
	int cnt = 0;
	int num = 1;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cnt++;
			for (int z = 0; z < 4; z++) {
				if (cnt == input[z]) v[y][x] = num++;
			}
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << v[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}