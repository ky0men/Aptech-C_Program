#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Hay nhap so nguyen thu nhat a: ");
    scanf("%d", &a);
    printf("Hay nhap so nguyen thu hai b: ");
    scanf("%d", &b);
    printf("Hay nhap so nguyen thu ba: ");
    scanf("%d", &c);
    d = a + b + c;
    printf("Tong cua 3 so %d, %d, %d la: %d\n", a,b,c,d);
    return 0;
}