#include <iostream> // bubblesort
using namespace std;

void bubblesort(int arr[], int n){
    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
