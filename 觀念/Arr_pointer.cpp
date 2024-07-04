#include <iostream> // C++版本 i++ && ++i
#include <string>
using namespace std;

int main(){
	int a[] = {6, 7, 8, 9, 10};
	int leng = sizeof(a)/sizeof(int);
	int *p = a;
	*(p++) += 123;
	*(++p) += 123;
	for(int j = 0;j<leng;j++){
		cout << a[j] << " ";
	}
}
