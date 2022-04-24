#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	/**한문장을 입력받으세요.(최대 10글자)
       그리고가장 많은 알파벳이 어떤 알파벳인지 출력해주세요.
	   */
	// char v11 입력받기
	// data초기화
	// data에 v넣기
	// maxindex 이용해서 최대 찾기
	
	char v[11];
	cin >> v;
	int len = strlen(v);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]]++;
	}
	int maxIndex = 0;
	for (int x = 0; x < 200; x++) {

		if (data[x] > data[maxIndex]) {
			maxIndex = x;
		}
	}

	cout << (char)maxIndex;
	return 0;
	
}
