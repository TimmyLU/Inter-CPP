#include <iostream>
using namespace std;
int main(){
    char s[] = "0113256";
    char *p = s;
    printf("%c",*p++);
    printf("%c",*(p++));
    printf("%c",(*p)++);
    printf("%c",*++p);
    printf("%c",*(++p));
    printf("%c", ++*p);
    printf("%c", ++(*p));
    //ans = 0113234
    printf(s); // 0123456
}
