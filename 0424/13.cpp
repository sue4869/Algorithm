#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	/*
	* �ϸ��� ������ġ�� ������ �ִµ�, ���� ������ �̻����� �ε�Ĩ�ϴ�.
	 �̶� ��ġ���� ������ �ϸ��� �����մϴ�. up 2��ġ�ƿ� down 2��ġ�ƴ� ��ġ�� ������ �ϸ��� ������ �����ϴ�.
	 ���Ͽ� �Ʒ��� ���¸� �Է¹ް�,������ ������ ġ���� ������ ����ϼ���.
	 */

	// bit1 bit2 �Է¹ޱ�
	// �� �迭 �� 1�ΰ� ã�� cnt
	int bit1[5];
	int bit2[5];
	for (int x = 0; x < 5; x++) {
		cin >> bit1[x];
	}
	for (int x = 0; x < 5; x++) {
		cin >> bit2[x];
	}
	int cnt = 0;
	for (int x = 0; x < 5; x++) {
		if (bit1[x] == 1 && bit2[x] == 1) {
			cnt++;
		}
	}
	cout << cnt << "��";

	return 0;
}	
