#include<iostream>
using namespace std;

int constructorFunc(int k, int i, int flag){
	int constructor = 0; // constructor: �����ڸ� ��� ����
	constructor += k;
	while (k != 0) { // d(j) ���ϱ�
		constructor += k % 10;
		k /= 10;
	}
	if (constructor == i) {
		flag = 1;
	}
	return flag;
}
int testFunc(int i) {
	int flag = 0, k; // flag: ���� �ѹ��� �ƴϸ� break�� ���������� ���� flag, k: �ڸ��� ���ϱ� ���� ����

	for (int j = 1; j < i; j++) {
		k = j;
		flag = constructorFunc(k, i, flag);
		if (flag == 1)	return flag;
	}
	return flag;
}
int main() {
	for (int i = 1; i <= 100; i++) {
		if (!testFunc(i)) { // �����ڰ� �ϳ��� �����ϸ� flag�� 1�̵Ǳ� ������ flag == 0�� ���°� ���� �ѹ��� �ȴ�.
			cout << i << endl;
		}
	}	
}