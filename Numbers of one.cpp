#include <stdio.h> // 計算二進位數有多少個1

int numbers_of_one(unsigned int n){
	int count = 0;
	while(n != 0){
		n = n & (n - 1); // 1010 & 1001 -----> 每次while都去掉最小的1
		count ++;
	}
	return count;
}

int main(){
	unsigned int n;
	scanf("%u", &n);
	printf("%d", numbers_of_one(n));
}
