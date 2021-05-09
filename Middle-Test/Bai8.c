#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap so nguyen n bat ky: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    system("Pause");
    return 0;
}