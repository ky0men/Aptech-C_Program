#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hay nhap chieu dai cua mang n = ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("So ban nhap khong hop le! Hay nhap lai!");
        scanf("%d", &n);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Hay nhap phan tu thu %d trong mang: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\nSo le o vi tri le la: ");
    int sumOdd = 0;
    int sumEven = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
        sumOdd += a[i];
    }
    printf("\n\nSo chan o vi tri chan la: ");
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
        sumEven += a[i];
    }
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("\n\nTong cac so o vi tri le la: %d", sumOdd);
    printf("\n\nTong cac so o vi tri chan la: %d", sumEven);
    printf("\n\nSo lon nhat trong mang la: %d", max);
    printf("\n\nSo be nhat trong mang la: %d", min);
    int x;
    printf("\n\nHay nhap mot so x bat ky: ");
    scanf("%d", &x);
    printf("\n\nCac so lon hon %d la: ", x);
    for (int i = 0; i < n; i++)
    {
        int countx = 0;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                countx++;
            }
        }
        if (countx == 0 && a[i] > x)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\nCac so nho hon %d la: ", x);
    for (int i = 0; i < n; i++)
    {
        int countx = 0;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                countx++;
            }
        }
        if (countx == 0 && a[i] < x)
        {
            printf("%d ", a[i]);
        }
    }
    int secondMin = max;
    int secondMax = min;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max && secondMax < a[i])
        {
            secondMax = a[i];
        }
        if (a[i] > min && secondMin > a[i])
        {
            secondMin = a[i];
        }
    }
    printf("\n\nSo lon thu 2 trong mang la: %d", secondMax);
    printf("\n\nSo nho thu 2 trong mang la: %d", secondMin);
    printf("\n\nCac so trung nhau trong mang la: ");
    for (int i = 0; i <= max; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == a[j])
            {
                count++;
            }
            if (count >= 2)
            {
                printf("%d ", a[j]);
                break;
            }
        }
    }
    printf("\n");
    system("Pause");
    return 0;
}