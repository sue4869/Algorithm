#include <iostream>
#include <cstring>
using namespace std;

/*
*1. 3x3 �迭�� �� ���� 9���� �Է¹޽��ϴ�.
2. 1~9������ ���� ��, � ���ڵ��� �迭�� �������� ã��,"��������"���� ����� �ּ���.
* ���� �˰���, STL ������� �ʰ�, DAT�� ����� �ּ���.
*/

//v33 
//data10 �ʱ�ȭ
//v�Է¹ޱ�
//data���� for. �� ==0 ã��
int main()
{
	int v[3][3];
	int data[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cin >> v[y][x];
			data[v[y][x]]++;
		}
	}

	for (int x = 1; x < 10; x++) {
		if (data[x] == 0) {
			cout << x << " ";
		}
	}


	return 0;
}
