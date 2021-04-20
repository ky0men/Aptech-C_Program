#include <stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("Hay nhap so nguyen thu nhat a: ");
    scanf("%d", &a);
    printf("Hay nhap so nguyen thu hai b: ");
    scanf("%d", &b);
    printf("Hay nhap so nguyen thu ba: ");
    scanf("%d", &c);
    d = (float)(a + b + c)/3;
    printf("TBC cua 03 so nguyen %d, %d, %d la: %.2f \n", a, b, c, d);
    return 0;
}