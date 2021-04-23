#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so cuoi cung cua tam giac: ");
    scanf("%d", &n);
    for (int i = 0; i < (n + 1)/2; i++){
        for (int j = 0; j <= i; j++){
            printf("%d\t",2*j + 1);

        }
        printf("\n");
    }

    return 0;
}