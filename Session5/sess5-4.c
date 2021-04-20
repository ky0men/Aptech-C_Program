#include<stdio.h>

int main(){
    int a;
    printf("Hay nhap mot so le: ");
    scanf("%d", &a);
    while(a % 2 == 0){
        printf("So ban nhap khong dung! Hay nhap lai: ");
        scanf("%d", &a);
    }
    return 0;
}