#include<stdio.h>

int main(){
    int a, b, c;
    printf("Hay nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Hay nhap so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Hay nhap so nguyen thu ba: ");
    scanf("%d", &c);
    int max = a;
    max < b ? max = b : max = a;
    max < c ? max = c : max = b;
}