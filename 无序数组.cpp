#include <stdio.h>  

int main() {
    int arr[] = { 4, 1, 3, 5, 2 };
    int* ptr = arr; // ָ��ָ������ĵ�һ��Ԫ��  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("ʹ��ָ��������飺\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // ������ָ���Ի�ȡֵ  
    }
    printf("\n");

    // ���ߣ�ʹ��ָ������ֱ����ѭ���е���ָ��  
    printf("ʹ��ָ�������������飺\n");
    for (ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}