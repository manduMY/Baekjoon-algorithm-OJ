#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int alpha[26];
	fill_n(alpha, 26, -1); // �迭�� �ѹ��� �ʱ�ȭ �ϴ� c++ �Լ�
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		/*-97�� �������� str[i]�� int�� �ٲٸ� 97�� ������ ������ alpha�迭�� a~z���� 0~25���� �̹Ƿ� -97�� ���־ ���ĺ��� alpha�迭���� ã�� �����̴�.*/
		if (alpha[(int)str[i] - 97] != -1) { // ���࿡ ���ĺ� �迭�� �ڸ� ��ġ ������ �ԷµǾ� ������ �ǵ帱 �ʿ��� �Ѿ�ش�.
			continue;
		}
		alpha[(int)str[i] - 97] = i; // ���° �ڸ����� �Է����ش�.
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}