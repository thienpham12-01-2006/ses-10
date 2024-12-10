#include <stdio.h>  

int main() {  
    int arr[100], n, i, j, minIdx, temp;  

    printf("Nhap so phan tu mang: ");  
    scanf("%d", &n);  

    printf("Nhap cac phan tu:\n");  
    for (i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  

    for (i = 0; i < n - 1; i++) {  
        minIdx = i;  
        for (j = i + 1; j < n; j++) {  
            if (arr[j] < arr[minIdx]) {  
                minIdx = j;  
            }  
        }  
        temp = arr[i];  
        arr[i] = arr[minIdx];  
        arr[minIdx] = temp;  
    }  

    printf("Mang sau khi sap xep:\n");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}
