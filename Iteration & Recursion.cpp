#include <stdio.h>
/*
	fac1 = 迭代（Iteration）
	fac2 = 遞歸（Recursion）
*/
int fac2(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n * fac2(n - 1);
	}
}

int fac1(int n){
	int ans = 1;
	for(int i = 1;i <= n;i++){
		ans = ans * i;
	}
	return ans;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d",fac1(n));
	printf("%d",fac2(n));
	return 0;
}