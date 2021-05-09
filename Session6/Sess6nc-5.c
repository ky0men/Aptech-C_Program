#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so nguyen duong bat ky: ");
    scanf("%d", &n);
    while(n <= 0){
        printf("So ban nhap khong hop le. Hay nhap lai!");
        scanf("%d", &n);
    }
    printf("Cac so nguyen to nho hon %d la: ", n);
    int count = 0;
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                count++;
            }
        }
        if (count <= 2){
                printf("%d ",i);
            }
        count = 0;
    }
    

    return 0;
}