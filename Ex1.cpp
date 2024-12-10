#include <stdio.h>  

int main() {  
    int arr[100]; 
    int n, searchElement, found = 0;  

    printf("Nhap so luong phan tu cua mang: ");  
    scanf("%d", &n);  

    printf("Nhap cac phan tu cua mang:\n");  
    for (int i = 0; i < n; i++) {  
        printf("Phan tu [%d]: ", i);  
        scanf("%d", &arr[i]);  
    }  

    printf("Nhap phan tu can tim: ");  
    scanf("%d", &searchElement);  

    for (int i = 0; i < n; i++) {  
        if (arr[i] == searchElement) {  
            printf("Phan tu %d ton tai trong mang tai vi tri %d.\n", searchElement, i);  
            found = 1;
            break;
        }  
    }  

    if (!found) {  
        printf("Phan tu %d khong ton tai trong mang.\n", searchElement);  
    }  

    return 0;  
}
