#include <stdio.h>
// #include <conio.h>
int main(){
    int x = 7;
    int y = 9;

    x = x >> 1;
    y = y << 1;

    printf("Gia tri x sau khi dich bit sang phai: %d\n", x);
    printf("Gia tri x sau khi dich bit sang trai: %d\n", y);
    return 0;
}