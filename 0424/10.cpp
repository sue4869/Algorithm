#include <iostream>
#include <cstring>
using namespace std;

/*
*GKG�� �ִ� �迭�� ���� 3���� �迭�� ������ �� ĭ���ٰ� �Է¹ް�, ��ĭ�� ä���ּ���.
�� 6���� ���ڿ��� �������ڰ� 3���̻�(>=3) ���� �ϴ��� �˻��ϴ� �ҽ��ڵ带 �ۼ����ּ���.
�����ϸ�"����"���
�������� ������"����"���
���ε�� A B C�� �Է¹�����
�迭���� G K G A B C �̷��� 6�� ���ڰ� �ֽ��ϴ�.
���⼭ �������� 3���̻� �����ϴ� ���ڴ� ������
"����" �� ���Դϴ�.
*/

//v24 �Ϻ��ϵ��ڵ�
// �Է¹ޱ�
//data200 �ʱ�ȭ
//data�� v �ֱ�
// data�� >=3 ���� flag�̿�
int main()
{
	char v[2][4] = {
		"GKG"
	};

	for (int x = 0; x < 3; x++) {
		cin >> v[1][x];
	}
	char data[200] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			data[v[y][x]]++;
		}
	}
	int flag = 0;
	for (int x = 0; x < 200; x++) {
		if (data[x] >= 3) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout << "����";
	else cout << "����";
	return 0;
}