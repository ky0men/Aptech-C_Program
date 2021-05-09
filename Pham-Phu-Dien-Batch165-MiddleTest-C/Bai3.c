#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap so KW dien da tieu thu: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("So KW dien ban nhap khong hop le. Hay nhap lai! ");
        scanf("%d", &n);
    }
    int money;
    if (n > 250)
    {
        money = (n - 250) * 1700 + 100 * 1500 + 50 * 1200 + 100 * 800;
    }
    else if (n > 150)
    {
        money = (n - 150) * 1500 + 50 * 1200 + 100 * 800;
    }
    else if (n > 100)
    {
        money = (n - 100) * 1200 + 100 * 800;
    }
    else
    {
        money = n * 800;
    }
    printf("\nSo tien dien can phai tra la: %ld VND\n", money);
    system("Pause");
    return 0;
}