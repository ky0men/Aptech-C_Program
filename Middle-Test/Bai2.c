#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    printf("Giai phuong trinh bac nhat ax + b = 0\n");
    printf("Hay nhap so a: ");
    scanf("%lf", &a);
    printf("Hay nhap so b: ");
    scanf("%lf", &b);
    printf("Ket qua x = %g\n", -b / a);
    system("Pause");
    return 0;
}