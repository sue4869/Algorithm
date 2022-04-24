#include <iostream>
#include <cstring>
using namespace std;

/*
*GKG가 있는 배열에 문자 3개를 배열의 나머지 빈 칸에다가 입력받고, 빈칸에 채워주세요.
총 6개의 문자에서 같은문자가 3개이상(>=3) 존재 하는지 검사하는 소스코드를 작성해주세요.
존재하면"있음"출력
존재하지 않으면"없음"출력
예로들어 A B C를 입력받으면
배열에는 G K G A B C 이렇게 6개 문자가 있습니다.
여기서 같은문자 3개이상 존재하는 문자는 없으니
"없음" 이 답입니다.
*/

//v24 일부하드코딩
// 입력받기
//data200 초기화
//data에 v 넣기
// data값 >=3 인지 flag이용
int main()
{
	char v[2][4] = {
		"GKG"
	};

	for (int x = 0; x < 3; x++) {
		cin >> v[1][x];
	}
	char data[200] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			data[v[y][x]]++;
		}
	}
	int flag = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] >= 3) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout << "없음";
	else cout << "있음";
	return 0;
}