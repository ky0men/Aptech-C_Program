#include<stdio.h>

int main(){
    printf("Cac so nguyen to nho hon 100 la: ");
    for (int i = 0; i < 100; i++){
        int count = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                count++;
            }
        }
        if (count == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}