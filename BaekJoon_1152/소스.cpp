#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int start = 0, end = 0; // start는 한 단어가 시작하는 부분, end는 한 단어가 끝나는 부분
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
			if (str[i + 1] == ' ' || str[i + 1] == NULL) { // 공백을 만나거나 문자열이 끝나는 경우이다.
				end = 1;
				space++;
				start = 0;
				end = 0;
			}
		}
	}
	cout << space << endl;
}