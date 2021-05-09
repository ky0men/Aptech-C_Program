#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Hay nhap so nguyen x bat ky: ");
    scanf("%d", &x);
    printf("Hay nhap so nguyen y bat ky: ");
    scanf("%d", &y);
    printf("Ket qua (x^3 + y^3)*(x + y) la: %d\n", (x * x * x + y * y * y) * (x + y));
    printf("Ket qua (x || y)||(x && y) la: %d\n", (x || y) || (x && y));
    system("Pause");
    return 0;
}