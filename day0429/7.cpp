#include <iostream>
#include <cstring>
using namespace std;

//strcmp 사용해보기.
int main() {
	cout << "ID :";
	char id[4];
	cin >> id;
	cout << "Password : ";
	char pass[20];
	cin >> pass;
	int idCheck = strcmp(id, "BBQ");
	int passCheck = strcmp(pass, "1234");
	if (idCheck == 0 && passCheck == 0) {
		cout << "pass";
	}
	else {
		cout << "no";
	}

}
