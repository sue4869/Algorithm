#include <iostream>
#include <cstring>
using namespace std;

/*
*�ѹ����� �Է¹ް�,�� ���ڸ��� ���� ������ּ���.
�ִ� 10���� ���� �Էµ� �� �ֽ��ϴ�
(DirectAddressTable���̿����ּ���)
*/

//v11 �Է�
// ���̱��ϱ�
//data200 �ʱ�ȭ
// v���� for data�� v�ֱ�
// data���� >0 cout
int main() {
	char v[11];
	cin >> v;
	int len = strlen(v);
	int data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]]++;
	}
	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			cout << (char)x << ":" << data[x] << endl;
		}
	}
	return 0;
}
