#include <iostream>
#include <cstring>
using namespace std;

/*
*
�ѹ����� �Է¹ް�, �ߺ� ���ĺ��� ������ �ľ��ĺ� ������� ������ּ���.
(A~F����, �ִ� 10����,direct address table �ڷᱸ�����̿����ּ���)
*/
//v11�Է�
//data 200 �ʱ�ȭ
//v���� data�� �ֱ� =1
// ==1�� index cout

int main() {
	char v[11];
	cin >> v;
	int len = strlen(v);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]] = 1;
	}
	for (int x = 0; x < 200; x++) {
		if (data[x] == 1) {
			cout << (char)x;
		}
	}
	return 0;
}