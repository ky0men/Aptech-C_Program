#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Hay nhap so a: ");
    scanf("%d", &a);
    printf("Hay nhap so b: ");
    scanf("%d", &b);
    printf("Hay nhap so c: ");
    scanf("%d", &c);
    int min = a;
    int max = a;
    if (max < b)
    {
        max = b;
    }
    else
    {
        min = b;
    }
    if (max < c)
    {
        max = c;
    }
    else
    {
        min = c;
    }
    printf("So lon nhat la: %d\n", max);
    printf("So nho nhat la: %d\n", min);
    system("Pause");
    return 0;
}