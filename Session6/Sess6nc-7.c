#include <stdio.h>
#include <stdlib.h>

int Fibonaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonaci(n - 2) + Fibonaci(n - 1);
}
int main()
{
    int n;
    printf("Hay nhap so nguyen duong bat ky: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("So ban nhap khong hop le. Hay nhap lai! ");
        scanf("%d", &n);
    }
    printf("So Fibonaci thu %d la: %d\n", n, Fibonaci(n));

    system("Pause");
    return 0;
}