#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int start = 0, end = 0; // start�� �� �ܾ �����ϴ� �κ�, end�� �� �ܾ ������ �κ�
	int space = 0;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			if (start != 0) { 
				continue;
			}
		}
		else {
			start = 1;
			if (str[i + 1] == ' ' || str[i + 1] == NULL) { // ������ �����ų� ���ڿ��� ������ ����̴�.
				end = 1;
				space++;
				start = 0;
				end = 0;
			}
		}
	}
	cout << space << endl;
}