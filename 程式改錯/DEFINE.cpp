#include <iostream>
#define a 2+3
using namespace std;
int main(){
	cout << a*a << endl; //預期結果為25 but ANS = 11
						 //原因 2+3*2+3 會先處理乘法運算
						 //#define改成 (2+3) 即可
	return 0;
}