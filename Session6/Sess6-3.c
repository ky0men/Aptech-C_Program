#include<stdio.h>

int main(){
    int a;
    printf("Hay nhap so Kw dien da tieu thu: ");
    scanf("%d", &a);
    int money = 0;
    if (a > 300){
        money = (a - 300)*1400 + 100*1340 + 50*1210 + 50*900 + 100*550;
    } else if(a > 200){
        money = (a - 200)*1340 + 50*1210 + 50*900 + 100*550;
    } else if (a > 150){
         money = (a - 150)*1210 + 50*900 + 100*550;
    } else if (a > 100){
        money = (a - 100)*900 + 100*550;
    }else{
        money = a*550;
    }
    printf("So tien dien phai tra la: %d VND\n", money);

    return 0;
}