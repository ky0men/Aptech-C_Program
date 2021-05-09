#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap mot so n nguyen duong bat ky: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i==1 || i==3 || i==5 || i==7){
             printf("%d x ", i);
        }else if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){
                printf("%d x ", i);
            }
    }
}