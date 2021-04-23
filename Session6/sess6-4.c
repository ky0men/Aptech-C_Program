#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so nguyen n bat ky: ");
    scanf("%d", &n);
    int tongBp = 0;
    for (int i = 1; i <=n; i++){
        tongBp += i*i;
    }
    printf("Tong binh phuong cac so tu 1 den %d la %d\n", n, tongBp);
    return 0;
}