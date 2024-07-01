#include <stdio.h> // 是否能執行? Ans : no
		   //改正 : 至少要str[11] 要包含'/0'
int main(){
	char str[10] = "HelloWorld";
	printf("%s", str);
	return 0;
}
