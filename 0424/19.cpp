#include <iostream>
#include <cstring>
using namespace std;
/*
*�� ������ �Է� ��������.
�� ���忡�� GHOST �ܾ �����ϴ��� ã�Ƽ� ��� �� �ּ���.
QGHOSTA�� �Է� �޾Ҵٸ�
�Է¹��� ����ȿ� GHOST �� ���� �ϹǷ����縦 ��� �� �ּ���.
ABGOSAT�� �Է� �޾Ҵٸ�
�Է¹��� ����ȿ� GHOST�� ���� ���� �����Ƿ��������� ������ ��� �� �ּ���.
*/

int main() {
	char v[10];
	cin >> v;
	char check[6] = "GHOST";
	int len = strlen(v);
	int flag = 0;
	for (int x = 0; x < len; x++) {
		if (v[x] == check[0]) {
			flag = 1;
			for (int y = 0; y < 5; y++) {
				if (v[x++] != check[y]) {
					flag = 0;
					break;
				}
			}
		}
	}
	if (flag) cout << "����";
	else cout << "�������� ����";

	return 0;
}