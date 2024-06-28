#include <iostream> // 1 + 3 + 5 + ... + 999 =?
using namespace std;

int main(){
    int sum = 0;
    for(int i = 1; i <= 999; i += 2){ // i = 首項, <= 末項, 累加 = 等差
        sum += i;
    }
    cout << sum;
    return 0;
}