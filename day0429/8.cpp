#include <iostream>
using namespace std;

//strcpy 사용해보기
int main() {

	char buf[10] = "ABC";
	char tt[10] = "KFC";
	char temp[10];

	strcpy(temp, buf);
	strcpy(buf, tt);
	strcpy(tt, temp);

	cout << buf;
	cout << tt;
}