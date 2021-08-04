#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soHoanHao(int n){
  int sum = 0, result = 0;
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      sum += i;
    }
  }
  if(sum == n){
    result = 1;
  }
  return result;
}

int main(){
  printf("4 so hoan hao dau tien la: ");
  int count = 0;
  for (int i = 1; i < INFINITY; i++){
    if(soHoanHao(i)){
      printf("%d\t", i);
      count++;
    }
    if(count == 4){
      break;
    }
  }

  system("pause");
  return 0;
}