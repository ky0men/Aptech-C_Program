#include <stdio.h>

void inputArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Input a[%d] = ", i);
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
int maxOfArr(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
int minOfArr(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
int posOfArr(int a[], int n, int q)
{
    for (int i = 0; i < n; i++)
    {
        if (q == a[i])
        {
            printf("%d ", i + 1);
        }
    }
}
int main()
{
    int n;
    printf("Please input element quantity of array: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("The entered number is not valid. Please input again!");
    } while (n <= 0);
    int a[n];
    inputArr(a, n);
    printf("\n\nThe inputed array is: ");
    outputArr(a, n);
    printf("\nMax = %d", maxOfArr(a, n));
    printf("\tIn position is: ");
    posOfArr(a, n, maxOfArr(a, n));
    printf("\nMin = %d", minOfArr(a, n));
    printf("\tIn position is: ");
    posOfArr(a, n, minOfArr(a, n));

    return 0;
}