#include <iostream> // 找出指定範圍中的primes
#include <vector>
#include <cmath>

using namespace std;

vector<int> primes;

int main() {
    int num;
    cin >> num;
    vector<int> prime(num + 1, 0); // 使用 vector<int> 來初始化 prime，並全部設置為 0 --->> 先全部當成是質數

    for (int i = 2; i <= sqrt(num); i++) { // sqrt(nums) -----> 質數篩法 大於的可以無視
        if (prime[i] == 0) { // 如果 i 是質數
            for (int j = i * i; j <= num; j += i) {
                prime[j] = 1; // 走訪一遍vector，將 i 的倍數標記為非質數 1
            }
        }
    }

    for (int i = 2; i <= num; i++) {  //標記完 把陣列中的內容標籤輸出
        if (prime[i] == 0) {
            primes.push_back(i);
            cout << i << " "; // 輸出質數
        }
    }
    return 0;
}
