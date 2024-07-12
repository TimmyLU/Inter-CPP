#include <iostream>
using namespace std;

char convert(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}

int main(){
    char c;
    while(cin >> c){
        cout << convert(c);
    }
}
