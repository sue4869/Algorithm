#include <iostream>
#include <cstring>
using namespace std;

/*
*win �迭�� �հ��� ����� �ֽ��ϴ�.
people�� ��ȣ�� �Է¹ް�,
�׸��� �հ� ���θ� ��� ���ּ���
*/
int main()
{
	// win23 �ϵ��ڵ�
	// people4 �Է¹ޱ�
	//win ���� for. data10�� win �ֱ�
	// people���� for. data > 0 �̸� �հ� �ƴϸ� ���հ�

	int win[2][3] = {
		3,5,1,
		4,2,6
	};
	int people[4];
	for (int x = 0; x < 4; x++) {
		cin >> people[x];
	}
	int data[10] = { 0 };
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			data[win[y][x]]++;
		}
	}
	for (int x = 0; x < 4; x++) {
		cout << people[x] << "��";
		if (data[people[x]] > 0) {
			cout << " �հ�\n";
		}
		else {
			cout << " ���հ�\n";
		}
	}
	return 0;
}
