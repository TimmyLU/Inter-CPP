#include <iostream>
using namespace std;
int main() {
    int value = 2;
    switch (value) {
        case 1:
            cout << "Case 1" << endl;
            break;
        case 2:
            cout << "Case 2" << endl;
        case 3:
            cout << "Case 3" << endl;
    }
    /*
    	預期結果為"Case 2"
    	但是Case 2 中沒有加上break跳出導致連Case 3都執行
    	修正 : 補上break即可
    */
    return 0;
}