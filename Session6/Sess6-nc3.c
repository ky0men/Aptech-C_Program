#include<stdio.h>

int main(){
    long int n, d;
    printf("Hay nhap so n bat ky voi 100 <= n <= 10000000: ");
    scanf("%ld", &n);
    while(n < 100 || n > 10000000){
        printf("So ban nhap khong hop le! Hay nhap lai: ");
        scanf("%ld", &n);
    }
    d = n;
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    printf("Tong cac chu so trong so %ld la: %d\n", d, sum);
    return 0;
}