#include <stdio.h>
int main(){
    unsigned int a,b,c,v;
    printf("Hay nhap canh a cua hinh hop chu nhat: ");
    scanf("%d", &a);
    printf("Hay nhap canh b cua hinh hop chu nhat: ");
    scanf("%d", &b);
    printf("Hay nhap canh c cua hinh hop chu nhat: ");
    scanf("%d", &c);
    v = a*b*c;
    printf("The tich cua hinh hop chu nhat la: %d\n", v);
    return 0;
}