#include <stdio.h>
main(){
    unsigned int sl;
    float gia, tongGia, giamGia;
    printf("Hay nhap so luong san pham: ");
    scanf("%d", &sl);
    printf("Hay nhap gia san pham: ");
    scanf("%f", &gia);
    tongGia = sl*gia;
    giamGia = tongGia*0.9;
    printf("Tong gia la: %.2f\n", tongGia);
    printf("Tong gia sau khi giam 10%% la: %.2f\n", giamGia);


}