#include <stdio.h>

/*
 * 思想：每经过一次排序，都会在未排序好的元素中挑选一个最大的元素，放置在已排序好元素的前端。
 * 划分：未排序好|已排序好
 * 步骤：每次都在未排序好的元素中，挑选一个最大的元素，并将其放到已排序好的元素中。
 */

void bubble_sort(int arr[],int length){
    //每次都需要把一个最大的元素移动到后面，一共只需要比较n-1个元素（还剩最后一个元素是不用比较的，因为它肯定是最小的）
    for (int i = 0;i < length - 1;i++)
        //需要比较的次数，只需要在未排序好的元素中进行比较（未排序元素的个数为：length-1-i）
        for (int j = 0;j < length - 1 - i;j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

}
//int main() {
//    int arr[] = {3,2,5,56,7,3,6,7,23,36};
//    bubble_sort(arr,10);
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
