#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Hay nhap so nguyen a bat ky: ");
    scanf("%d", &a);
    c = a;
    printf("Hay nhap so nguyen b bat ky: ");
    scanf("%d", &b);
    d = b;
    while(a != b){
        if (a > b){
            a = a - b;
        }
        if (a < b){
            b = b - a;
        }
    }
    printf("UCLN cua %d va %d la: %d\n", c, d, a);
    printf("BCNN cua %d va %d la: %d\n", c, d, (c*d)/a);


    return 0;
}