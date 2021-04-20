#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap do dai cua day: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Hay nhap phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("Day cac so da duoc sap xep la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}