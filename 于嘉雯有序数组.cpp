#include <stdio.h>  

#define MAX_SIZE 10 // ����������������  

// ��������  
void insertSorted(int arr[], int* size, int element);

int main() {
    int arr[MAX_SIZE] = { 1, 3, 5, 7, 9 }; // ��ʼ��������  
    int size = sizeof(arr) / sizeof(arr[0]); // ���鵱ǰԪ�ظ���  
    int newElement = 4; // Ҫ�������Ԫ��  

    // ��������Ƿ�����  
    if (*size == MAX_SIZE) {
        printf("�����������޷�������Ԫ�ء�\n");
    }
    else {
        // ������Ԫ��  
        insertSorted(arr, &size, newElement);

        // ��ӡ����������  
        printf("����������: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

// �������壺����Ԫ��������ʽ���뵽������  
void insertSorted(int arr[], int* size, int element) {
    int i;
    // ���Ԫ���Ƿ�Ӧ�ò��뵽����Ŀ�ʼλ��  
    if (element < arr[0]) {
        // ������Ԫ������ƶ�һλ��Ϊ��Ԫ���ڳ��ռ�  
        for (i = *size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = element;
        (*size)++; // ���������С  
    }
    else {
        // �ҵ���Ԫ�ص���ȷλ�ã�������ƶ�Ԫ��  
        for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = element;
        (*size)++; // ���������С  
    }
}