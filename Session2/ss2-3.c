#include <stdio.h>
main(){
    unsigned int r;
    double Pi = 3.14;
    double s,c;
    printf("Hay nhap ban kinh hinh tron: ");
    scanf("%d", &r);
    c = Pi*r*2;
    s = Pi*r*r/2;
    printf("Chu vi hinh tron la: %g\n", c);
    printf("Dien tich hinh tron la: %g\n", s);

}