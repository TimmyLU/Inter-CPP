#include <iostream> //一行判斷是否為2的次方
using namespace std;

bool isPowerOfTwo(int num){
    return (num & (num - 1)) == 0 && num > 0;
}
int main(){
	int num;
	while(cin >> num){
		cout << (isPowerOfTwo(num) ? "yes" : "no") << endl;
	}
	return 0;
}
