#include <iostream>
#include <cstring>
using namespace std;

/*
*����б��� �˰��� ���� ���ߵ� �л� 3���� ������ȸ ������ ���� ������ Ÿ�� ��ȸ������ ���� �ֽ��ϴ�.
�������� �¼��� ������� �پ� �ֽ��ϴ�.
�������� ��ȣ 3���� �Է� �޾�,  �������� ��� ĭ�� ������ �ɾ� �ִ����� ã�� ����� �ּ���.
������ ĭ�� 0������ �����մϴ�.
*/

//train8�ϵ��ڵ�
//team3�Է¹ޱ�
// seat 0 �ʱ�ȭ
//train for�� ����. team0���� ��ġ�ϴ� �ε��� ã��

int main()
{
	int train[8] = {
		3,7,6,4,2,9,1,7
	};
	int team[3];
	cin >> team[0] >> team[1] >> team[2];
	int seat = 0;
	for (int x = 0; x < 8; x++) {
		if (train[x] == team[0]) {
			seat = x;
			break;
		}
	}
	cout << seat << "��~" << seat + 2 << "�� ĭ";
	return 0;
}