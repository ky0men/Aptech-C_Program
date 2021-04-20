#include<stdio.h>

int main(){
    int count = 0;
    int n = 5;
    while(count < 10){
        if (n % 5 == 0){
            count++;
            printf("%d ",n);
        }
        n++;
    }

    return 0;
}