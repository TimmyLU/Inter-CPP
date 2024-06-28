#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*  
    C++ code: 一個一個讀入stack，讀到右括號，把stack pop
    3+4*(2-1) ----> 3421-*+
*/
int main(){
    string input;
    vector <char> stack;
    while(cin >> input){
        stack.clear();
        for(int i = 0;i<=input.length();i++){
            if(isdigit(input[i])){
                cout << input[i];
            }
            else if(input[i] != '('){ //如果字符是操作符（但不是左括號）
                stack.push_back(input[i]);
            }
            else if(input[i] == ')'){ // 如果字符是右括號 
                cout << stack.back();
                stack.pop_back();
            }
        }
        // 當處理完所有字符後，輸出堆疊中剩餘的所有操作符
        while(!stack.empty()){
            cout << stack.back();
            stack.pop_back();
        }
        cout << endl;
    }
    return 0;
}
