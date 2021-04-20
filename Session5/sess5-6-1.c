#include <stdio.h>

int main(){
    int n;
    printf("Hay nhap so nguyen duong n: ");
    scanf("%d", &n);
    while(n <= 0){
        printf("So ban nhap khong dung! Hay nhap lai: ");
        scanf("%d", &n);
    }
    int count = 0;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
           count++;
        }
    }
    if (count ==0){
        printf("So %d la so nguyen to.\n", n);
    }else{
        printf("So %d khong phai la so nguyen to.\n", n);
    }
    return 0;
}