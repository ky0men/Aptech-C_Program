#include<stdio.h>

#define Pi 3.14

int main(){
    unsigned int r;
    printf("Hay nhap ban kinh hinh cau: ");
    scanf("%u", &r);
    double s, v;
    s = 4*Pi*r*r;
    v = Pi*(4/3);
    printf("Dien tich mat cau co ban kinh %d la: %lf\n", r, s);
    printf("The tich hinh cau co ban kinh %d la: %lf\n", r, v);

    return 0;
}