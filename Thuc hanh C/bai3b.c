#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap chieu cao cua cay thong: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= 2*n - 1; j++){
            if(n-i <= j && j <= n + i ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}