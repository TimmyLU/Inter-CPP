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
    //char c;
    string s;
    while(cin >> s){
        for(char c : s){
            cout << convert(c);
        }
        cout << endl;
    }
    //cin >> c;
    //cout << convert(c);
}
