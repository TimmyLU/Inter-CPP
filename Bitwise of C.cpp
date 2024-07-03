#include <stdio.h> //問 output?
int main(){
	unsigned int x = 0xf; //0x0000000f
	x <<= 4; // 0x0000000f ---> 0x000000f0
	x |= 0x03; // x = x or 0x03 ----> 0x000000f3
	printf("0x%x", x); // output = 0xf3
}
