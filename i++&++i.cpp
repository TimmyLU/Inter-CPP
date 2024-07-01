#include <stdio.h> // i++ 跟 ++i 的區別
int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p = a;
    *(p++) += 100;
    *(++p) += 100;
    for(int i=0; i<6; i++){
        printf("%d ", a[i]); // Ans : 101 2 103 4 5 6
    }
    return 0;
}
