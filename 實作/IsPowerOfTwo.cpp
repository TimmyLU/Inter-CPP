#include <iostream> //一行判斷是否為2的次方
using namespace std;

bool isPowerOfTwo(int num){
    return (num > 0 && (num & (num - 1)) == 0) ? "true" : "false";
}
int main(){
	int num;
	while(cin >> num){
		if(isPowerOfTwo){
		    cout << "yes";
		}else{
		    cout << "no";
		}
	}
	return 0;
}
