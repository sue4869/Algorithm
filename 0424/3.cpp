#include <iostream>
#include <cstring>
using namespace std;

/*
*1. �Ʒ� 5 x 3 ���� �迭�� �ϵ��ڵ� �մϴ�.
* 2. 1~9������ ���� N 1���� �Է� �޽��ϴ�.
3. 5 x 3 �� ���� �迭 ������ N���� �����ϴ� ���ڸ� ����մϴ�.
���� N���� �����ϴ� ���ڰ� �� �� �̻��̶��, ������������ ����մϴ�.
*/

// v35�ϵ��ڵ�
//data10 �ʱ�ȭ
//v���� for data�� v�ֱ�
//n �Է�
// data���� for 
//���� n�ΰ� ã��
int main()
{
	int v[3][5] = {
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int data[10] = { 0 };
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			data[v[y][x]]++;
		}
	}
	int n;
	cin >> n;
	for (int x = 0; x < 10; x++) {
		if (data[x] == n) {
			cout << x << " ";
		}
	}

	return 0;
}