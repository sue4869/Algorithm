#include <iostream>
#include <cstring>
using namespace std;

/*
*1. vect ���� �迭�� "MINCODING" ������ �ϵ� �ڵ� �մϴ�.
2. ã�� ������ ���� n�� n���� ���ڵ��� �Է� �޽��ϴ�.
3. �Է� ���� ���ڰ� vect �迭�� �����ϸ� O, �ƴϸ� X�� ����մϴ�.
*��ø for���� Ȱ������ �ʰ�,DAT(Direct Address Table)�� ����� �ּ���.
*/
//vect10 �ϵ��ڵ�
//int n 
// for 0~n ch10 �Է¹ޱ�
//data 200 �ʱ�ȭ
//vect���� for data�� vect�ֱ�
// for 0~n
// data���� ã��
int main() {
	char vect[10] = "MINCODING";
	int n;
	cin >> n;
	char ch[100];
	for (int x = 0; x < n; x++) {
		cin >> ch[x];
	}
	char data[200] = { 0 };
	for (int x = 0; x < 9; x++) {
		data[vect[x]]++;
	}

	for (int x = 0; x < n; x++) {
		if (data[ch[x]] > 0) {
			cout << "O";
		}
		else {
			cout << "X";
		}
	}
	return 0;
}
