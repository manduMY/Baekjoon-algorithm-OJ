#include<iostream>
using namespace std;

int main() {
	int N, sum = 0;
	char ch;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ch;
		sum += ch - '0';
	}
	cout << sum << endl;
}