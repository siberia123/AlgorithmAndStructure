#include <stdio.h>

void selection_sort(int arr[],int size){
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[] = {3,2,5,4,64,23,45};
    selection_sort(arr,7);
    for (int i = 0; i < 7; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
