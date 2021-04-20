#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so n: ");
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++){
        if (i % 3 == 0){
            count++;
        }
    }
    printf("So chu so chia het cho 3 la: %d\n", count);
    return 0;
}