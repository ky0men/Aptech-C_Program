#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dec2Bin(int n)
{
    int temp = n, binChar, bin = 0, m = 0;
    while (temp > 0)
    {

        binChar = temp % 2;
        bin += binChar * pow(10, m);
        m++;
        temp /= 2;
    }
    return bin;
}

int dec2Oct(int n)
{
    int temp = n, octChar, oct = 0, m = 0;
    while (temp > 0)
    {
        octChar = temp % 8;
        oct += octChar * pow(10, m);
        m++;
        temp /= 8;
    }
    return oct;
}
int main()
{
    int n;
    printf("Hay nhien nguyen duong n bat ky: ");
    scanf("%d", &n);
    printf("So %d chuyen thanh so nhi phan la: %ld\n", n, dec2Bin(n));
    printf("So %d chuyen thanh so bat phan la: %ld\n", n, dec2Oct(n));
    system("Pause");
    return 0;
}