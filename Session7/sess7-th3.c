#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n = 99999999;
    int sum = 0;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("So hoan hao thu %d la: %d\n", count, i);
            count++;
        }
        sum = 0;
    }
    system("Pause");
    return 0;
}