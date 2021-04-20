#include <stdio.h>
int main(){
    int a, b;
    printf("Hay nhap so a bat ky: ");
    scanf("%d", &a);
    printf("Hay nhap so b bat ky: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("So a sau khi hoan doi la: a = %d\n", a);
    printf("So b sau khi hoan doi la: b = %d\n", b);
    return 0;

}