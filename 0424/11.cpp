#include <iostream>
#include <cstring>
using namespace std;

/*
*6�� ���ڸ� �Է¹�������.
���� ���ڰ� �����ϴ��� Ȯ���ϰ� ��� ���ּ���.
����O  =>"���ð��� �߰�"���
����X  =>"�̹߰�"���
*/

// v6 �Է¹ޱ�
//data10 �ʱ�ȭ
//data�� v �ֱ�
// data�� >=2 ã�� flag �̿�

int main()
{
	int v[6];
	for (int x = 0; x < 6; x++) {
		cin >> v[x];
	}

	int data[10] = { 0 };
	for (int x = 0; x < 6; x++) {
		data[v[x]]++;
	}
	int flag = 0;
	for (int x = 0; x < 10; x++) {
		if (data[x] >= 2) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "���ð��� �߰�";
	else cout << "�̹߰�";
	return 0;
}