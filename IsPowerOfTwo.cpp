#include <iostream>

using namespace std;

bool isPowerOfTwo(int num){
    return (num & (num - 1)) == 0 && num > 0;
}
int main(){
	int num;
	cin >> num;
	if(isPowerOfTwo(num)){
		cout << "yes";
	}else{
		cout << "no";
	}
	return 0;
}
