#include <stdio.h>
int main(void) //問 output
{
    char *a[] = {"abc", "def", "ghijk", "lmnop"};
    char *b = a[2];
    
    printf("%d\n", sizeof(a));        //8*4=32
    printf("%d\n", sizeof(b));        //8
    printf("%d\n", sizeof(a[2]));    //8
    printf("%d\n", sizeof(b[2]));    //1
    
    return 0;
}
