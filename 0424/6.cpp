#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 3x3 town�迭�� �ϵ��ڵ� ���ּ���.
2. ������Ʈ �׸��� �Է¹޾� black �迭�� ������ �ּ���.
3. town�� ������Ʈ�� �ش��ϴ� ����� �� �� �ִ��� ����ϼ���.
*/

//town34 �ϵ��ڵ�
// black �Է¹ޱ� - data�� black�ֱ�
//data�ʱ�ȭ
// town���� for�� data[town] > 0ã��
//cnt�̿�
int main()
{
	char town[3][4] = {
		"CDA",
		"BMZ",
		"QPO"
	};
	char black[4];
	char data[200] = { 0 };
	for (int y = 0; y < 4; y++) {
		cin >> black[y];
		data[black[y]]++;
	}
	int cnt = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (data[town[y][x]] > 0) {
				cnt++;
			}
		}
	}

	cout << cnt << "��";
	return 0;
}