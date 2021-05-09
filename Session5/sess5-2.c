#include<stdio.h>

int main(){
    int month;
    printf("Hay nhap so thang trong nam: ");
    scanf("%d", &month);
    while (month < 1 || month > 12){
        printf("So thang ban nhap khong hop le! Hay nhap lai: ");
        scanf("%d", &month);
    }
    switch (month)
    {
    case 1:
    case 2:
    case 3:
        printf("XUAN\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("HA\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("THU\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("DONG\n");
        break;
    }
    
    return 0;
}