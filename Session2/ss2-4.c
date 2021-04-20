#include <stdio.h>
int main(){
    signed int a, b, h, s;
    printf("Hay nhap canh a cua hinh binh hanh: ");
    scanf("%d", &a);
    printf("Hay nhap canh b cua hinh binh hanh: ");
    scanf("%d", &b);
    printf("Hay nhap chieu cao h cua hinh binh hanh: ");
    scanf("%d", &h);
    if (a < h && h < b){
        s = h*a;
    } else if(h < a && a < b){
        s = h*b;
    }
    printf("\nDien tich cua hinh binh hanh la: %d\n", s);
}