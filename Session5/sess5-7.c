#include<stdio.h>

int main(){
    unsigned int a;
    printf("Hay nhap mot so nguyen duong a: ");
    scanf("%u", &a);

    int sum = 0;
    for (int i = 1; i < a; i++){
        if (a % i == 0){
            sum += i;
        }
    }
    if (sum == a){
        printf("So %d la so hoan hao\n", a);
    }else{
        printf("So %d khong phai la so hoan hao\n", a);
    }
    return 0;
}