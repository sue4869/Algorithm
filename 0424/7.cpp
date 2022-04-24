#include <iostream>
#include <cstring>
using namespace std;

/*
*5 x 3 ĭ�� ���ĺ����� ä���� �ֽ��ϴ�.�� ���ĺ����� �����ؼ� �� �ٷ� ��� ���ּ���.
* ���� �˰���, STL, ���ڿ��� Ȱ������ �ʽ��ϴ�. DAT (Direct Address Table)�� Ȱ���Ͽ� Ǯ�� �ּ���.
*/

//v54�ϵ��ڵ�
//data200 �ʱ�ȭ
//data�� v�ֱ� v���� for��
// data����for�� -> data�� >0�ΰ��� �ش� data����ŭ �ݺ��ñ�� 

int main()
{
	char v[5][4] = {
		"ABC",
		"AGH",
		"HIJ",
		"KAB",
		"ABC"
	};

	char data[200] = { 0 };
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			data[v[y][x]]++;
		}
	}

	for (int x = 0; x < 200; x++) {
		if (data[x] > 0) {
			for (int y = 0; y < data[x]; y++) {
				cout << (char)x;
			}
		}
	}
	return 0;
}