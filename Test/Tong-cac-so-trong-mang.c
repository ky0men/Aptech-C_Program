#include <stdio.h>

int main(){
    int n;
    printf("Hay nhap do dai mang: ");
    scanf("%d", &n);
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu mang a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        sum += a[i];

    }
    printf("\nTong cac so nguyen trong mang la: %d\n", sum);
    return 0;
}