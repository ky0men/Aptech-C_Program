#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap so nguyen duong n bat ky: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("So ban nhap khong hop le. Hay nhap lai! ");
        scanf("%d", &n);
    }
    int giaiThua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    printf("Giai thua cua so %d la: %d\n", n, giaiThua);
    system("Pause");
    return 0;
}