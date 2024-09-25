#include <stdio.h>  

int main() {
    int arr[] = { 4, 1, 3, 5, 2 };
    int* ptr = arr; // 指针指向数组的第一个元素  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("使用指针遍历数组：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // 解引用指针以获取值  
    }
    printf("\n");

    // 或者，使用指针算术直接在循环中递增指针  
    printf("使用指针算术遍历数组：\n");
    for (ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}