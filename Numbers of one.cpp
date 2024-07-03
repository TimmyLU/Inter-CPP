#include <stdio.h> // 計算二進位數有多少個1

int numbers_of_one(unsigned int n){
	int count = 0;
	while(n != 0){
		n = n & (n - 1);
		count ++;
	}
	return count;
}

int main(){
	unsigned int n;
	scanf("%u", &n);
	printf("%d", numbers_of_one(n));
}
