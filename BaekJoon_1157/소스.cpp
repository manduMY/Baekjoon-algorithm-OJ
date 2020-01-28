#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char up, res = 'A'; // ������� A�� �ʱ�ȭ�ϰ� ���߿� max���� ���ĺ���ŭ �ε����� + ���ش�.
	int alpha[26], cnt=0; // cnt�� �ߺ��� max ���� �����ϴ��� ���θ� ã�� ����
	fill_n(alpha, 26, 0); // ���ĺ� �迭�� 0���� �ʱ�ȭ
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		up = toupper(str[i]); // ��� �ҹ��ڸ� �빮�ڷ� �ٲپ��ش�. �빮�ڸ� �ҹ��ڷ� �ٲٷ��� tolower('����')�� ����ȴ�.
		alpha[up - 65]++; // ���ĺ� �迭�� �ش� ���ĺ��� ������ ī��Ʈ ���ش�.
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) { // ���� ���� ���ĺ��� ã�´�.
			max = alpha[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			res += i; // ��� ���� �ʱⰪ�� A�̴�. �׷��� A���� max���� ���ĺ��� ��ġ��ŭ + ���ش�.
			cnt++;
		}
		if (cnt >= 2) {
			cout << "?" << endl; // �ߺ��� max���� �����ϸ� ?��� �� �ٷ� ����
			return 0;
		}
	}
	cout << res << endl;
	return 0;
}