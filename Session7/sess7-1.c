#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Hay nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Hay nhap so cot cua ma tran: ");
    scanf("%d", &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Hay nhap gia tri cua ma tran tai vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap la: \n");
    int countOdd = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\t%d\t", a[i][j]);
            if (a[i][j] % 2 != 0)
            {
                countOdd++;
            }
        }
        printf("\n");
    }
    printf("\nSo so le co trong ma tran a[%d][%d] la: %d \n", n, m, countOdd);
    int sumRow = 0;
    int max = a[0][0];
    int min = a[0][0];
    int sumX = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumRow += a[i][j];
            if (max < a[i][j])
            {
                max = a[i][j];
            }
            if (min > a[i][j])
            {
                min = a[i][j];
            }
            if (i + j == n - 1 || i == j)
            {
                sumX += a[i][j];
            }
        }
        printf("Tong dong %d cua ma tran la: %d", i + 1, sumRow);
        printf("\n");
        sumRow = 0;
    }
    printf("\nSo lon nhat trong ma tran la: %d\n", max);
    printf("\nSo nho nhat trong ma tran la: %d\n", min);
    printf("\nTong hai duong cheo cua ma tran la: %d\n", sumX);
    system("Pause");
    return 0;
}