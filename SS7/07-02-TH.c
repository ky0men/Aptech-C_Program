#include <stdio.h>
#include <stdlib.h>


int soHoanHao(int n){
  int sum = 0, result = 0;
  for(int i = 1; i < n; i++){
    if(n % i ==0){
      sum += i;
    }
  }
  if(sum == n){
    result = 1;
  }
  return result;
}

int main(){
  int n;
  do{
    printf("Hay nhap mot so nguyen duong bat ky: ");
    scanf("%d",&n);
    if(n <= 0 || n != (int)n){
      printf("So ban nhap khong hop le! Hay nhap lai.\n");
    }
  }while(n <= 0 || n != (int)n);

  if(soHoanHao(n)){
    printf("So %d la so hoan hao.\n", n);
  }else{
    printf("So %d khong phai la so hoan hao.\n", n);
  }

  system("pause");
  return 0;
}