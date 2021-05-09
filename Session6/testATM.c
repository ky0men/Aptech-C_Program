#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define clrscr() system("CLS") // DINH NGHIA LENH XOA MAN HINH

main()
{
    int tongsotien = 10000;
    int rut = 0;
    int nop;
    char command;
    do
    {
        clrscr(); // Xoa man hinh
        printf("ATM CUA NGAN HANG TECHCOMBANK XIN KINH CHAO QUY KHACH\n\n");
        printf("VUI LONG CHON CHUC NANG DE GIAO DICH\n\n");
        printf("GO [R] DE RUT TIEN\n");
        printf("GO [N] DE NOP TIEN\n");
        printf("GO [X] DE XEM SO DU\n");
        printf("CHON CHUC NANG: ");
        command = getch();

        switch (command)
        {
        case 'r':
        case 'R':

            printf("\n\nNHAP SO TIEN CAN RUT: ");
            scanf("%d", &rut);
            if (rut % 10000 == 0 && rut > 0 && rut <= tongsotien)
            {
                tongsotien = tongsotien - rut;
                printf("\nGIAO DICH RUT TIEN THANH CONG\n");
                printf("\nTAI KHOAN CUA BAN HIEN CO: %d\n", tongsotien);
            }
            else
            {
                printf("\nSO TIEN CAN RUT KHONG HOP LE\n");
            }
            break;
        case 'n':
        case 'N':

            printf("\n\nNHAP SO TIEN CAN NOP: ");
            scanf("%d", &nop);
            if (nop > 0)
            {
                tongsotien = tongsotien + nop;
                printf("\nGIAO DICH RUT TIEN THANH CONG\n");
                printf("\nTAI KHOAN CUA BAN HIEN CO: %d\n", tongsotien);
            }
            else
            {
                printf("\nSO TIEN CAN NOP KHONG HOP LE\n");
            }
            break;
        case 'x':
        case 'X':
            printf("\nTAI KHOAN CUA BAN HIEN CO: %d\n", tongsotien);
            break;
        }
        printf("\n\n");
        printf("BAN CO MUON TIEP TUC GIAO DICH KHAC KHONG? CHON (Y) / (N):\n");
        command = getch();

    } while (command == 'Y' || command == 'y');
}
