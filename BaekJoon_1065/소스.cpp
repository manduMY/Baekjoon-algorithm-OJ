#include<iostream>
using namespace std;

int hansu_func(int N){
	int temp1, temp2; // temp1�� ù��° �ڸ����� �ι�° �ڸ����� �����̰� temp2�� �ι�° �ڸ����� ����° �ڸ����� �����̴�.
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (i < 100) { // 100���� ������ ������ �Ѽ��̱� ������ ī��Ʈ �÷��ش�.
			cnt++;
		}
		else {
			temp1 = i / 100 - ((i / 10) % 10);
			temp2 = ((i / 10) % 10) - i % 10;

			if (temp1 == temp2) { // �� ������ ������ ī��Ʈ �÷��ش�.
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	int N;
	cin >> N;

	cout << hansu_func(N) << endl;
}