#include <iostream>
using namespace std;

//sketchbook 구조체 image33
//입력받기
//data200구성
//data >0 인곳 출력

struct Sketchbook {
	char image[3][3];
};

int main() {
	

	Sketchbook a;
	for (int y = 0; y < 3; y++) {
		cin >> a.image[y];
	}
	int data[200] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			data[a.image[y][x]]++;
		}
	}

	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			cout << (char)x;
		}
	}
	return 0;
}
