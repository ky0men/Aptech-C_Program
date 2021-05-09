#include<stdio.h>

int main(){
    int n;
    do{
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
    }while(!(n>100 && n<10000));
    int tong = 0;
    while(n!=0){
        tong+= n%10;
        n=n/10;
    }
    printf("Tong cac chu so la: %d\n", tong);
    return 0;

}