#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int alpha[26];
	fill_n(alpha, 26, -1); // 배열을 한번에 초기화 하는 c++ 함수
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		/*-97을 한이유는 str[i]를 int로 바꾸면 97이 나오기 때문에 alpha배열이 a~z까지 0~25까지 이므로 -97을 해주어서 알파벳을 alpha배열에서 찾기 위함이다.*/
		if (alpha[(int)str[i] - 97] != -1) { // 만약에 알파벳 배열에 자리 위치 정보가 입력되어 있으면 건드릴 필요없어서 넘어가준다.
			continue;
		}
		alpha[(int)str[i] - 97] = i; // 몇번째 자리인지 입력해준다.
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}