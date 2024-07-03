#include <stdio.h>
/*
	迭代（Iteration）
	遞歸（Recursion）
*/
int Iteration(int n){
	int ans = 1;
	for(int i = 1;i <= n;i++){
		ans = ans * i;
	}
	return ans;
}

int Recursion(int n){
	if(n == 0){
		return 1;
	}else{
		return n * Recursion(n - 1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n",Iteration(n));
	printf("%d\n",Recursion(n));
	return 0;
}
