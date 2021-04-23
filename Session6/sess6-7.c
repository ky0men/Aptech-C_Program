#include<stdio.h>

int main(){
    double f;
    printf("Hay nhap do F: ");
    scanf("%lf", &f);
    double c;
    c = (f - 32)*5/9;
    printf("%g do F tuong duong voi %.2lf do C.\n", f, c);

    return 0;
}