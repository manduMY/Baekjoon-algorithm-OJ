#include<iostream>
using namespace std;

int constructorFunc(int k, int i, int flag){
	int constructor = 0; // constructor: 생성자를 담는 변수
	constructor += k;
	while (k != 0) { // d(j) 구하기
		constructor += k % 10;
		k /= 10;
	}
	if (constructor == i) {
		flag = 1;
	}
	return flag;
}
int testFunc(int i) {
	int flag = 0, k; // flag: 셀프 넘버가 아니면 break로 빠져나오기 위한 flag, k: 자릿수 구하기 위한 변수

	for (int j = 1; j < i; j++) {
		k = j;
		flag = constructorFunc(k, i, flag);
		if (flag == 1)	return flag;
	}
	return flag;
}
int main() {
	for (int i = 1; i <= 100; i++) {
		if (!testFunc(i)) { // 생성자가 하나라도 존재하면 flag가 1이되기 때문에 flag == 0인 상태가 셀프 넘버가 된다.
			cout << i << endl;
		}
	}	
}