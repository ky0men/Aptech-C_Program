#include <stdio.h>
#include <stdlib.h>

int reverseNum(int n)
{
    int newNum = n % 10;
    n /= 10;
    int lastNum;
    while (n > 0)
    {
        lastNum = n % 10;
        n /= 10;
        newNum = newNum * 10 + lastNum;
    }
    return newNum;
}

int main()
{
    int n;
    printf("Hay nhap vao mot so nguyen duong bat ky: ");
    scanf("%d", &n);
    printf("\nSo dao cua so %d la: %d\n", n, reverseNum(n));

    system("Pause");
    return 0;
}