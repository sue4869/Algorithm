#include <iostream>
using namespace std;
/*
main : 변수 2개를 만들고 주소를 bbq함수에 넘겨주세요
bbq : 숫자 5개를 입력받고 max와 min값을 찾아 각각 변수 a와 b에 넣어주기
main함수에서 변수 출력
*/

void BBQ(int* a, int* b) {
	int v[5];
	for (int x = 0; x < 5; x++) {
		cin >> v[x];
	}

	int max = 0;
	int min = 99999;
	for (int x = 0; x < 5; x++) {
		if (v[x] > max) {
			max = v[x];
		}
		if (v[x] < min) {
			min = v[x];
		}
	}
	*a = max;
	*b = min;
}
int main() {
	int a, b;
	BBQ(&a, &b);

	cout << "a=" << a <<endl;
	cout << "b=" << b;
	return 0;
}
