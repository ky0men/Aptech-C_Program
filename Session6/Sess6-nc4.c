#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap mot so n nguyen duong bat ky: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("So ban nhap khong phai la so ngyen duong. Hay nhap lai: ");
        scanf("%d", &n);
    }
    printf("So %d duoc phan tich thanh thua so nguyen to la: %d = ", n, n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d x ", i);
            n /= i;
            i--;
        }
    }

    printf("%d\n", n);
    system("Pause");
    return 0;
}