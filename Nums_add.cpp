#include <iostream>
#include <sstream>
using namespace std;

int add(string nums) {
    stringstream ss(nums);
    int number, sum = 0;
    while (ss >> number) {
        sum += number;
    }
    return sum;
}

int main() {
    string nums;
    cout << "numbers：";
    getline(cin, nums);
    int result = add(nums);
    cout << "sum: " << result << endl;
    return 0;
}
