#include <stdio.h>
/*
 * 思想：从未排序的始端取一个元素，插入到已排序中。
 * 划分：已排序 | 未排序
 */

void insertion_sort(int arr[],int size){
    //从第二个元素开始取（第一个元素只有一个肯定是排序好的）
    for (int i = 1; i < size; ++i) {
        //j：代表已排序好元素的最后一个元素
        int j = i - 1;
        //先把未排序的始端保存（因为下面会发生移动覆盖）
        int key = arr[i];
        //对已排序的元素进行依次比较
        while (j >= 0 && key < arr[j]){
            //移动覆盖
            arr[j+1] = arr[j];
            j -= 1;
        }
        //元素插入到正确位置
        arr[j+1] = key;
    }
}

//int main(){
//    int arr[] = {1,4,3,54,23,5,34,23,3,4,42};
//    insertion_sort(arr,11);
//    for (int i = 0; i < 11; ++i) {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

