// const : read only

#include <stdio.h>
int main(){
	const int c = -5;
	c++; //Compile error
	printf("%d\n",c);
}