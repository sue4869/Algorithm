#include <iostream>
#include <cstring>
using namespace std;

/*
*cardlist �迭�� ���� ������ ī�尡 �ֽ��ϴ�.
1. �빮�� ���ĺ����� ������ ī�� ������ �Է� �մϴ�.������ ���̴� �ִ� 15�Դϴ�.
2. �Է��� ī�忡�� �� �� ������ ī�尡 �ִ����� ã�� ����մϴ�.
* DAT (Direct Address Table)�� ����Ͽ� Ǯ�� �ּ���.
*/

//input16 �Է�
//input ����
//data200 �ʱ�ȭ
//input���� for data�� input�ֱ�
//cnt�̿�
//data���� for . ��>0 ã��
int main()
{
	char input[16];
	cin >> input;
	int len = strlen(input);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[input[x]]++;
	}
	int cnt = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			cnt++;
		}
	}
	cout << cnt << "��";
	return 0;
}