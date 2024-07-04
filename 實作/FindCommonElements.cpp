#include <iostream> // 找2個1維Array中共同存在的值, 暴力法
#include <vector>
#include <algorithm>

using namespace std;

void findCommonElements(vector<int> &arr1, vector<int> &arr2){
    //sort(arr1.begin(), arr1.end());
    //sort(arr2.begin(), arr2.end());
    
    for(int i = 0; i < arr1.size(); i++){
        for(int j = 0; j < arr2.size(); j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main(){
    vector<int> arr1 = {1, 5, 2, 7, 3};
    vector<int> arr2 = {2, 9, 5, 3};
    findCommonElements(arr1, arr2);
    cout << endl;
    return 0;
}
