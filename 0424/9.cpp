#include <iostream>
#include <cstring>
using namespace std;

/*
*������ ���� ����Ʈ�� �ֽ��ϴ�.
�� �Ʒ��� 1�� [15 2 6]�̰�, �� �� ���� 5�� [15 18 17] �Դϴ�.
�ش� ����Ʈ�� �ϵ� �ڵ� �� �ּ���.
�׸��� Ư�� ���밡 ��� ���� � ������ ã������ �մϴ�.
family �迭�� ���� 3���� �Է� ���� ��, �̿� ��ġ�ϴ� ���밡 � ���� ������� ����� �ּ���.
* isPattern �Լ��� �����Ͽ� Ǯ�� �ּ���.
*/
//apt53 �ϵ��ڵ�
//family3 �Է¹ޱ�
// isPattern�Լ� family�迭 �ֱ�
// �ε��� 0�� apt, family 
int apt[5][3] = {
	15,18,17,
	4,6,9,
	10,1,3,
	7,8,9,
	15,2,6
};

int isPattern(int fam[3]) {
	for (int y = 0; y < 5; y++) {
		if (apt[y][0] == fam[0]) {
			return 5 - y;
		}
	}
}

int main()
{
	int family[3];
	for (int x = 0; x < 3; x++) {
		cin >> family[x];
	}
	int floor = isPattern(family);

	cout << floor << "��";
	return 0;
}
