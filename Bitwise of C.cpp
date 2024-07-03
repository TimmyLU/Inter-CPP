#include <stdio.h>
int main(){
	unsigned int x = 0xf;
	x <<= 4;
	x |= 0x03;
	printf("0x%x", x); // output = 0xf3
}