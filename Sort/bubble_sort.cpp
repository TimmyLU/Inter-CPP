void bubble_sort(int *arr, int len)
{
    int tmp = 0;
    
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (arr[j] < arr[i]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }//for
}//