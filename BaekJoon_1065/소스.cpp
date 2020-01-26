#include<iostream>
using namespace std;

int hansu_func(int N){
	int temp1, temp2; // temp1은 첫번째 자릿수와 두번째 자릿수의 공차이고 temp2는 두번째 자릿수와 세번째 자릿수의 공차이다.
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (i < 100) { // 100보다 작으면 무조건 한수이기 때문에 카운트 올려준다.
			cnt++;
		}
		else {
			temp1 = i / 100 - ((i / 10) % 10);
			temp2 = ((i / 10) % 10) - i % 10;

			if (temp1 == temp2) { // 두 공차가 같으면 카운트 올려준다.
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