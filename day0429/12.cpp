#include <iostream>
using namespace std;

//구조체 이용하여 위아래왼오른쪽의 첫번째 수의 합과
// 두번째 수의 곱의 더한 값을 출력하시오
struct Node {
	int a;
	int b;
};

Node v[3][4] = {
	{{1,2},{5,3},{1,4},{1,5}},
	{{1,1},{1,1},{1,1},{1,2}},
	{{1,4},{1,5},{2,2},{3,3}}
};

int direct[4][2] = {
	-1,0,
	1,0,
	0,-1,
	0,1
};
int getDirect(int y, int x) {
	int first = 0;
	int second = 1;
	for (int t = 0; t < 4; t++) {
		int dy = y + direct[t][0];
		int dx = x + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 3 || dx >= 4) {
			continue;
		}
		first += v[dy][dx].a;
		second *= v[dy][dx].b;
	}

	return first + second;
}
int main() {

	cout << getDirect(1, 1);
	

	


}