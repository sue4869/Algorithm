#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 8������ �빮�� ���ĺ����� ������ ������ �Է� �ϼ���.
2. �Է��� ���忡�� ���� ���� ���� ���ĺ��� ����ϼ���.
*/
//v9 �Է¹ޱ�
//data200�ʱ�ȭ
//for v���� data�� v�ֱ�
//max maxIndex ����
// data���� for 
// ��
int main()
{
	char v[9];
	cin >> v;
	char data[200] = { 0 };
	for (int x = 0; x < 8; x++) {
		data[v[x]]++;
	}

	int max = 0;
	int maxIndex = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] > max) {
			max = data[x];
			maxIndex = x;
		}
	}

	cout << (char)maxIndex;
	return 0;
}
