#include <stdio.h>
#include <stdlib.h>

void inputArr(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Please input element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void revArr(int n, int a[], int revA[])
{
    for (int i = 0; i < n; i++)
    {
        revA[i] = a[n - 1 - i];
        printf("%d ", revA[i]);
    }
}
void outputArr(int n, int a[])
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
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
    int revA[n];
    inputArr(n, a);
    printf("Array a[%d] is: ", n);
    outputArr(n, a);
    printf("\nReverse array is: ");
    revArr(n, a, revA);
    system("Pause");
    return 0;
}