#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap do dai cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("Hay nhap phan tu thu a[%d] ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    printf("\nSo lon nhat trong mang la %d\n", max);
    return 0;
}