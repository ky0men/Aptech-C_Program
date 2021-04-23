#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so n bat ky: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        if (i*i == n){
            printf("So %d la so chinh phuong\n", n);
            break;
        }
        if (i*i > n){
            printf("So %d khong phai la so chinh phuong\n", n);
            break;
        }
    }

    return 0;
}