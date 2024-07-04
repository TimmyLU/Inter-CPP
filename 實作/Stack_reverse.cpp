#include <iostream>
#include <stack>
using namespace std;

stack<char> cstack;
char input[100];

void reverse(char *input){
    while(*input != '\0'){
        cstack.push(*input);
        input++;
    }
    while(!cstack.empty()){
        cout << cstack.top();
        cstack.pop();
    }
    cout << " ";
}

int main(){
    while(cin >> input){
        reverse(input);
    }
    return 0;
}