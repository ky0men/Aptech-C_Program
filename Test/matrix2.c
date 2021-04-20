#include<stdio.h>

int main(){
    int m,n;
    printf("Hay nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Hay nhap so cot cua ma tran: ");
    scanf("%d", &n);
    int a[m][n];
    int sum = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Hay nhap gia tri cua ma tran vi tri %dx%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);            
            sum += a[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nTong cac phan tu trong ma tran la: %d\n", sum);
}