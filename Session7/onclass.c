#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    char a[10][12];
    char temp[12];
    do
    {
        printf("Nhap vao dong thu %d: ", n + 1);
        scanf("%s", a[n]);
    } while (strcmp(a[n++], "END") != 0);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Chuoi thu %d la: %s\n", i + 1, a[i]);
    }
    return 0;
}