#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Hay nhap so nguyen duong thu %d (lon hon 100 va be hon 999): ", i + 1);
            scanf("%d", &a[i]);
        } while (a[i] < 100 || a[i] > 999);
    }
    printf("\n\nSo nguyen to co trong mang la: ");
    int count = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", a[i]);
            sum += a[i];
        }
        count = 0;
    }
    printf("\n\nTong cac so nguyen to la: %d\n", sum);
    system("Pause");
    return 0;
}