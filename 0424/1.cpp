#include <iostream>
#include <cstring>
using namespace std;

/*
*1~65535���� ID�� ���� ������� �ֽ��ϴ�.
������ ���� ���� ��� ����� ���� ��, ���� �����ϰ� ����� ����� ID�� ����ϴ� ���α׷��� �ۼ� ���ּ���.
*/

//data66000�ʱ�ȭ
// v34�ϵ��ڵ�
//v���� for . data�� v�ֱ�
//max, maxindex
//data���� for. max��

int main()
{
	int data[66000] = { 0 };
	int v[3][4] = {
		65000,35,42,70,
		70,35,65000,1300,
		65000,30000,38,42
	};
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			data[v[y][x]]++;
		}
	}
	int max = 0;
	int maxIndex = 0;
	for (int x = 0; x < 66000; x++) {

		if (data[x] > max) {
			max = data[x];
			maxIndex = x;
		}
	}

	cout << maxIndex;

	return 0;
}
