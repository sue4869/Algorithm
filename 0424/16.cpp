#include <iostream>
#include <cstring>
using namespace std;
/*
*�� ������ �Է¹ް�
�������ڰ� �ѱ��ڶ� ������ Perfect
�ƴϸ� No�� ��� �� �ּ���.
*/

// a10 b10 c10 �Է�
// alen blen clen ���̱��ϱ�
// ���� �������� �� data�� �ֱ�
// >2�� flag = 1
int main() {
	char a[10], b[10], c[10];
	cin >> a >> b >> c;
	int alen = strlen(a);
	int blen = strlen(b);
	int clen = strlen(c);
	char data[200] = { 0 };
	int x;
	for (x = 0; x < alen; x++) {
		data[a[x]]++;
	}
	for (x = 0; x < blen; x++) {
		data[b[x]]++;
	}
	for (x = 0; x < clen; x++) {
		data[c[x]]++;
	}
	int flag = 0;
	for (int x = 0; x < 200; x++) {
		if(data[x]>=2) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "No";
	else cout << "Perfect";
	return 0;
}

