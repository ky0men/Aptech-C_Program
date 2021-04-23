#include<stdio.h>

int main(){
    int a, b;
    printf("Hay nhap so a: ");
    scanf("%d", &a);
    printf("Hay nhap so b: ");
    scanf("%d", &b);

    if (a < b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("So a la: %d\n", a);
    printf("So b la: %d\n", b);
    return 0;
}