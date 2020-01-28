#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char up, res = 'A'; // 결과값은 A로 초기화하고 나중에 max값의 알파벳만큼 인덱스를 + 해준다.
	int alpha[26], cnt=0; // cnt는 중복된 max 값이 존해하는지 여부를 찾기 위해
	fill_n(alpha, 26, 0); // 알파벳 배열을 0으로 초기화
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		up = toupper(str[i]); // 모든 소문자를 대문자로 바꾸어준다. 대문자를 소문자로 바꾸려면 tolower('문자')를 쓰면된다.
		alpha[up - 65]++; // 알파벳 배열에 해당 알파벳의 개수를 카운트 해준다.
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) { // 많이 나온 알파벳을 찾는다.
			max = alpha[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			res += i; // 결과 값은 초기값이 A이다. 그래서 A에서 max값의 알파벳의 위치만큼 + 해준다.
			cnt++;
		}
		if (cnt >= 2) {
			cout << "?" << endl; // 중복된 max값이 존재하면 ?출력 후 바로 종료
			return 0;
		}
	}
	cout << res << endl;
	return 0;
}