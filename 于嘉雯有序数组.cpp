#include <stdio.h>  

#define MAX_SIZE 10 // 定义数组的最大容量  

// 函数声明  
void insertSorted(int arr[], int* size, int element);

int main() {
    int arr[MAX_SIZE] = { 1, 3, 5, 7, 9 }; // 初始有序数组  
    int size = sizeof(arr) / sizeof(arr[0]); // 数组当前元素个数  
    int newElement = 4; // 要插入的新元素  

    // 检查数组是否已满  
    if (*size == MAX_SIZE) {
        printf("数组已满，无法插入新元素。\n");
    }
    else {
        // 插入新元素  
        insertSorted(arr, &size, newElement);

        // 打印插入后的数组  
        printf("插入后的数组: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

// 函数定义：将新元素以排序方式插入到数组中  
void insertSorted(int arr[], int* size, int element) {
    int i;
    // 检查元素是否应该插入到数组的开始位置  
    if (element < arr[0]) {
        // 将所有元素向后移动一位，为新元素腾出空间  
        for (i = *size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = element;
        (*size)++; // 更新数组大小  
    }
    else {
        // 找到新元素的正确位置，并向后移动元素  
        for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = element;
        (*size)++; // 更新数组大小  
    }
}