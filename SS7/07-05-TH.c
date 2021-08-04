#include <stdio.h>
#include <stdlib.h>


int indexOfArr(int arr[3][4], int k){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      if(arr[i][j] == k){
        printf("[%d][%d]\t", i+1, j+1);
      }
    }
  }
}
//Question a
int minArr(int arr[3][4]){
  int min = arr[0][0];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      if(min > arr[i][j]){
        min = arr[i][j];
      }
    }
  }
  return min;
}
//Question b
int maxArr(int arr[3][4]){
  int max = arr[0][0];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      if(max < arr[i][j]){
        max = arr[i][j];
      }
    }
  }
  return max;
}
//Question c
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
int soNguyenToTrongMang(int arr[3][4]){
  for(int i = 1; i <= maxArr(arr); i++){
    int count = 0;
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 4; k++){
        if(i == arr[j][k] && soNguyenTo(i)){
          count++;
        }
      }
    }
    if(count >= 1){
      printf("%d tai vi tri- ", i);
      indexOfArr(arr, i);
      printf("\n");
    }
  }
}
//Question d
int TBCRow(int arr[3][4]){
  float TBC;
  for(int i = 0; i < 3; i++){
    float sum = 0;
    for (int j = 0; j < 4; j++){
      sum += arr[i][j];
      TBC = sum/4;
    }
    printf("TBC cua dong %d la: %g\n", i+1, TBC);
  }
}
//Question e
int duplicateNum(int arr[3][4]){
  for(int i = 1; i <= maxArr(arr); i++){
    int count = 0;
    for(int j = 0; j < 3; j++){
      for (int k = 0; k < 4; k++){
        if(i == arr[j][k]){
          count++;
        }
      }
    }
    if(count >= 2){
      printf("%d\t", i);
    }
  }
}
//Question f
int greatThan(int arr[3][4], int x){
  for (int i = 0; i < 3; i++){
    int sum = 0;
    for (int j = 0; j < 4; j++){
      sum += arr[i][j];
    }
    if(x < sum){
      printf("Dong %d: ", i+1);
      for(int j = 0; j < 4; j++){
        printf("%d\t", arr[i][j]);
      }
      printf("\n");
    }
  }
}
//Question g
int lessThan(int arr[3][4], float y){
  for(int i = 0; i < 3; i++){
    float sum = 0;
    for(int j = 0; j < 4; j++){
      sum += arr[i][j];
    }
    if(y > sum/4){
      printf("Dong %d: ", i + 1);
      for(int j = 0; j < 4; j++){
        printf("%d\t", arr[i][j]);
      }
      printf("\n");
    }
  }
}
//Question i
int sumGreaThanCol(int arr[3][4], int z){
  int col1 = 0, col2 = 0, col3 = 0, col4 = 0;
  for(int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
      if(j == 0){
        col1 += arr[i][j];
      } else if(j == 1){
        col2 += arr[i][j];
      }else if(j == 2){
        col3 += arr[i][j];
      }else{
        col4 += arr[i][j];
      }
    }
  }
  if(col1 > z){
    printf("Cot 1\n");
  }
  if(col2 > z){
    printf("Cot 2\n");
  }
  if(col3 > z){
    printf("Cot 3\n");
  }
  if(col4 > z){
    printf("Cot 4\n");
  }
}
int main(){
  int arr[3][4];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      do{
        printf("Hay nhap phan tu thu [%d][%d]: ",i + 1, j + 1);
        scanf("%d", &arr[i][j]);
        if(arr[i][j] <= 0 || arr[i][j] != (int)arr[i][j]){
          printf("So ban nhap khong hop le! Hay nhap lai.\n");
        }
      }while (arr[i][j] <= 0 || arr[i][j] != (int)arr[i][j]);
    }
  }
  printf("\n*************************************************************\n");

  //Min cua mang
  printf("Gia tri nho nhat cua mang la: %d\n", minArr(arr));
  printf("Tai vi tri: ");
  indexOfArr(arr, minArr(arr));
  printf("\n*************************************************************\n");

  //Max cua mang
  printf("Gia tri lon nhat cua mang la: %d\n", maxArr(arr));
  printf("Tai vi tri: ");
  indexOfArr(arr, maxArr(arr));
  printf("\n*************************************************************\n");

  //So nguyen to trong mang
  printf("Cac so nguyen to trong mang la: \n");
  soNguyenToTrongMang(arr);
  printf("\n*************************************************************\n");

  //TBC tung dong trong mang
  TBCRow(arr);
  printf("\n*************************************************************\n");

  //Cac so trung nhau trong mang
  printf("Cac so trung nhau trong mang 2 chieu la: ");
  duplicateNum(arr);
  printf("\n*************************************************************\n");

  //Dong co tong lon hon x
  int x;
  printf("Nhap vao mot so x bat ky: ");
  scanf("%d", &x);
  printf("Cac dong co tong lon hon %d la:\n",x);
  greatThan(arr, x);
  printf("\n*************************************************************\n");

  //Dong co TBC nho hon y
  float y;
  printf("Nhap vao mot so y bat ky: ");
  scanf("%f", &y);
  printf("Cac dong co TBC nho hon %g la:\n",y);
  lessThan(arr, y);
  printf("\n*************************************************************\n");

  //Cot co tong lon hon z
  int z;
  printf("Nhap vao mot so z bat ky: ");
  scanf("%d", &z);
  printf("Cac cot co tong lon hon %d la:\n",z);
  sumGreaThanCol(arr, z);
  printf("\n*************************************************************\n");
  system("pause");
  return 0;
}