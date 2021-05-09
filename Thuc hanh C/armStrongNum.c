#include <stdio.h>
#include <math.h>

int countNum(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int armStrongNum(int n)
{
    int sumArmStrong = 0;
    int num = countNum(n);
    int temp = n, lastNum;
    while (temp > 0)
    {
        lastNum = temp % 10;
        temp /= 10;
        sumArmStrong += pow(lastNum, num);
    }
    if (sumArmStrong == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Hay nhap so n bat ky: ");
    scanf("%d", &n);
    if (armStrongNum(n) == 1)
        printf("So %d la so ArmStrong!\n", n);
    else
        printf("So %d khong phai la so Asmstrong!\n", n);

    return 0;
}