#include <stdio.h>
#include <stdlib.h>

int sole(int arr[4][4]){
  int count = 0;
  for(int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if(arr[i][j] % 2 != 0){
        count++;
      }
    }
  }
  return count;
}
int sumRow(int arr[4][4]){
  int sum = 0, sumRow1 = 0, sumRow2 = 0, sumRow3 =0, sumRow4 = 0;
  for (int i = 0; i < 4; i++){
    sum = 0;
    for (int j = 0; j < 4; j++){
      sum += arr[i][j];
    }
    if(i == 0){
      sumRow1 = sum;
    }else if( i == 1){
      sumRow2 = sum;
    }else if(i == 2){
      sumRow3 = sum;
    }else{
      sumRow4 = sum;
    }
  }
  printf("Tong dong 1 la: %d\n", sumRow1);
  printf("Tong dong 2 la: %d\n", sumRow2);
  printf("Tong dong 3 la: %d\n", sumRow3);
  printf("Tong dong 4 la: %d\n", sumRow4);
}
int maxArr(int arr[4][4]){
  int max = arr[0][0];
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (max < arr[i][j]){
        max = arr[i][j];
      }
    }
  }
  return max;
}
int minArr(int arr[4][4]){
  int min = arr[0][0];
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (min > arr[i][j]){
        min = arr[i][j];
      }
    }
  }
  return min;
}
int sumCross(int arr[4][4]){
  int sum = 0, sum1 = 0, sum2 = 0;
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if(i == j){
        sum1 += arr[i][j];
      }else if(i + j == 3){
        sum2 += arr[i][j];
      }
    }
  }
  sum = sum1 + sum2;
  return sum;
}
int greatThan5Pos(int arr[4][4]){
  printf("Cac vi tri co gia tri lon hon 5 la: ");
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if(arr[i][j] > 5){
        printf("arr[%d][%d]\t", i + 1, j + 1);
      }
    }
  }
}
int main(){
  int arr[4][4];
  for(int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      printf("Nhap phan tu arr[%d][%d]: ", i+1, j+1);
      scanf("%d", &arr[i][j]);
    }
  }
  //Print array
  printf("Ma tran vua nhap la: \n");
  for(int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n***************************\n");

  //So le

  printf("So le co trong ma tran la: %d", sole(arr));
  printf("\n***************************\n");

  sumRow(arr);
  printf("\n***************************\n");

  printf("So lon nhat trong ma tran la: %d", maxArr(arr));
  printf("\n***************************\n");

  printf("So nho nhat trong ma tran la: %d", minArr(arr));
  printf("\n***************************\n");

  printf("Tong hai duong cheo cua ma tran la: %d", sumCross(arr));
  printf("\n***************************\n");

  greatThan5Pos(arr);
  printf("\n***************************\n");

  system("pause");
  return 0;
}