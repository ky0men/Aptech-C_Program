#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{
    int taikhoan = 1000000;
    int rut = 0;
    int nop;
    char reQuest;
    do
    {
        system("CLS");
        printf("CHAO MUNG BAN DEN VOI NGAN HANG APTECH\n");
        printf("NHAN [R] DE RUT TIEN\n");
        printf("NHAN [N] DE NOP TIEN\n");
        printf("NHAN [X] DE XEM SO DU TAI KHOAN\n");
        printf("TUY CHON GIAO DICH: ");
        reQuest = getch();

        switch (reQuest)
        {
        case 'r':
        case 'R':
            printf("HAY NHAP SO TIEN CAN RUT: ");
            scanf("%ld", &rut);
            if (rut > 0 && rut % 50000 == 0 && rut <= taikhoan)
            {
                taikhoan = taikhoan - rut;
                printf("GIAO DICH THANH CONG!\n");
                printf("SO TIEN CON LAI CUA QUY KHACH LA: %ld\n", taikhoan);
            }
            else
            {
                printf("SO TIEN QUY KHACH NHAP KHONG HOP LE!\n");
            }
            break;

        case 'n':
        case 'N':
            printf("HAY NHAP SO TIEN CAN NOP: ");
            scanf("%ld", &nop);
            if (nop > 0 && nop % 50000 == 0)
            {
                taikhoan = taikhoan + nop;
                printf("GIAO DICH THANH CONG!\n");
                printf("SO DU TRONG TAI KHOAN CUA QUY KHACH LA: %ld\n", taikhoan);
            }
            else
            {
                printf("SO TIEN QUY KHACH NHAP KHONG HOP LE!\n");
            }
            break;
        case 'x':
        case 'X':
            printf("SO DU TRONG TAI KHOAN QUY KHACH LA: %ld\n", taikhoan);
            break;
        }
        printf("\n\nBAN CO MUON THUC HIEN GIAO DICH KHAC KHONG?\n");
        printf("Y: Co\\ N: Khong\n");
        reQuest = getch();

    } while (reQuest == 'y' || reQuest == 'Y');

    // system("Pause");
}