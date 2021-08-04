#include <stdio.h>
#include <stdlib.h>

int condition(int a){
  int result = 0;
  if(a > 100 && a < 999 && a == (int)a){
    result = 1;
  }
  return result;
}

int soNguyenTo(int n){
  int count = 0, result = 0;
  for (int i = 1; i <= n; i++){
    if(n % i == 0){
      count++;
    }
  }
  if(count == 2){
    result = 1;
  }
  return result;
}

int soNguyenToTrongMang(int arr[10]){
  printf("Cac so nguyen to trong mang la: ");
  for(int i = 0; i < 10; i++){
    if(soNguyenTo(arr[i])){
      printf("%4d", arr[i]);
    }
  }
}

int sumSoNguyenTo(int arr[10]){
  int sum = 0;
  for(int i = 0; i < 10; i++){
    if(soNguyenTo(arr[i])){
      sum += arr[i];
    }
  }
  return sum;
}

int main(){
  int arr[10];
  printf("Hay nhap so nguyen bat ky > 100 va < 999\n");
  for (int i = 0; i < 10; i++){
    printf("Hay nhap phan tu thu %d: ", i+1);
    scanf("%d", &arr[i]);
    if(!condition(arr[i])){
      printf("So ban nhap khong hop le!\t");
      i--;
    }
  }
  printf("\n*****************************************************\n");

  //So nguyen to trong mang
  soNguyenToTrongMang(arr);
  printf("\n*****************************************************\n");
  //Tong cac so nguyen to trong mang
  printf("Tong cac so nguyen to trong mang la %d", sumSoNguyenTo(arr));
  printf("\n*****************************************************\n");

  system("pause");
  return 0;
}
