#include <iostream>
using namespace std;

int m1[3][3] = {
    1,2,3,
    4,5,6,
    7,8,9
};
int m2[3][3] = {
    1,1,1,
    2,3,2,
    3,3,3
};

int main(){
    int ans[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            int temp = 0;
            for(int k = 0;k<3;k++){
                temp += m1[i][k] * m2[k][j];
            }
            ans[i][j] = temp;
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}