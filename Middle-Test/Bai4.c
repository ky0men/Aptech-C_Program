#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap so nguyen duong n bat ky: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("So ban nhap khong hop le. Hay nhap lai! ");
        scanf("%d", &n);
    }
    printf("Cac uoc cua so %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    system("Pause");
    return 0;
}