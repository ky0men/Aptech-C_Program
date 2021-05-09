#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char reQuest;
    do
    {
        printf("Hay nhap mot ky tu bat ky: ");
        reQuest = getch();
        printf("\n");
        switch (reQuest)
        case 'x':
            printf("Ket thu chuong trinh\n");

    } while (reQuest != 'x');
    system("Pause");
    return 0;
}