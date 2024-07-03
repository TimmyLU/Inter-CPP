#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> primes; // 儲存找到的所有質數
    
    for (int i = 2; i <= num; i++){
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime){
            primes.push_back(i);
            cout << i << " "; // 輸出質數
        }
    }
    return 0;
}
