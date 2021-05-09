#include <stdio.h>

void inputArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Please input element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void outputArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int sumOdd(int a[], int n)
{
    int sum_Odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            sum_Odd += a[i];
    }
    return sum_Odd;
}

int sumEven(int a[], int n)
{
    int sum_Even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum_Even += a[i];
    }
    return sum_Even;
}
int Max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
int main()
{
    int n;
    printf("Please input element numbers of array: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("The entered number is not valid. Please input again!");
    } while (n <= 0);
    int a[n];
    inputArr(a, n);
    printf("Array inputed is: ");
    outputArr(a, n);
    printf("\n\nSum of odd number is: %d", sumOdd(a, n));
    printf("\n\nSum of even number is: %d", sumEven(a, n));
    printf("\n\nMin of array is: %d", Min(a, n));
    printf("\n\nMax of array is: %d", Max(a, n));
    return 0;
}