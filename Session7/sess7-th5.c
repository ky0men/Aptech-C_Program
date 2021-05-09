#include <stdio.h>
#include <stdlib.h>

void maxMin(int a[3][4])
{
    int max = a[0][0];
    int min = a[0][0];
    int maxi, maxj, mini, minj;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    printf("\n\nGia tri lon nhat trong mang la: %d, tai vi tri: \n", max);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (max == a[i][j])
            {
                printf("\t[%d][%d]", i + 1, j + 1);
            }
        }
    }
    printf("\n\nGia tri nho nhat trong mang la: %d, tai vi tri: \n", min);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (min == a[i][j])
            {
                printf("\t[%d][%d]", i + 1, j + 1);
            }
        }
    }
}
void prime(int a[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int count = 0;
            for (int m = 1; m <= a[i][j]; m++)
            {

                if (a[i][j] % m == 0)
                    count++;
            }
            if (count == 2)
            {
                printf("So %d la so nguyen to, tai vi tri [%d][%d]\n", a[i][j], i + 1, j + 1);
            }
        }
    }
}
void average(int a[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < 4; j)
        {
            sumRow += a[i][j];
        }
        printf("\nTrung binh cong dong thu %d la: %d", i + 1, sumRow);
    }
}
void duplicate(int a[3][4])
{
    int max;
    printf("\nCac so trung nhau trong mang la: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j)
        {
            int countDup = 0;
            for (int n = 0; n <= max; n++)
            {
                if (n == a[i][j])
                {
                    countDup++;
                }
                if (countDup == 2)
                    printf("%d ", n);
                break;
            }
        }
    }
}
int main()
{
    int a[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Hay nhap gia tri cua mang o vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    maxMin(a);
    printf("\n");
    prime(a);
    average(a);
    duplicate(a);

    system("Pause");
    return 0;
}
