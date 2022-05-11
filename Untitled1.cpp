#include <stdio.h>
  
int main() {    
    int i, number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int arr[number];
    printf("Nhap cac phan tu cua mang: \n");
    for (i = 0; i < number; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Cac phan tu cua mang: \n");
    for (i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
