#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap chieu cao cua tam giac vuong: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("Chieu cao ban nhap khong hop le. Hay nhap lai! ");
        scanf("%d", &n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    system("Pause");
    return 0;
}