#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap chieu cao hinh tam giac: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}