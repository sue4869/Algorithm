#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	/**�ѹ����� �Է¹�������.(�ִ� 10����)
       �׸����� ���� ���ĺ��� � ���ĺ����� ������ּ���.
	   */
	// char v11 �Է¹ޱ�
	// data�ʱ�ȭ
	// data�� v�ֱ�
	// maxindex �̿��ؼ� �ִ� ã��
	
	char v[11];
	cin >> v;
	int len = strlen(v);
	char data[200] = { 0 };
	for (int x = 0; x < len; x++) {
		data[v[x]]++;
	}
	int maxIndex = 0;
	for (int x = 0; x < 200; x++) {

		if (data[x] > data[maxIndex]) {
			maxIndex = x;
		}
	}

	cout << (char)maxIndex;
	return 0;
	
}
