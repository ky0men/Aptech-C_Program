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
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            printf("So %d la so chinh phuong\n", n);
            break;
        }
        if (i * i > n)
        {
            printf("So %d khong phai la so chinh phuong\n", n);
            break;
        }
    }
    system("Pause");
    return 0;
}