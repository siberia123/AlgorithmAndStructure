#include <stdio.h>

/*
 * 思想：在未排序好的元素中选取最小的，放置在已排序好的末尾。
 * 划分：已排序好 | 未排序好
 */


void selection_sort(int arr[],int size){
    //总共需要排序 size - 1 次，因为最后一个剩下的元素肯定是最小的（每次都会在未排序的元素中挑选最小的，放在已排序好元素的后端。）
    for (int i = 0; i < size - 1; ++i) { //这个 i 充当着分解线的作用
        //用来记录最小元素
        int minIndex = i;
        //在未排序好元素中遍历，寻找最小元素
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex])
                //找到了最小，就用minIndex来标记
                minIndex = j;
        }
        //将最小元素交换到已排序好元素的末端
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[] = {3,2,5,4,64,23,45,34,46,423,34,4,3,343,53};
    selection_sort(arr,15);
    for (int i = 0; i < 15; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
