#include <stdio.h>
#include <stdlib.h>

//Question a
int soChanChan(int n, int arr[n]){
  int count = 0;
  printf("So chan o cac vi tri chan la: \n");
  for(int i = 1; i < n; ){
    if(arr[i] % 2 == 0){
      printf("So %d tai vi tri %d\n", arr[i], i+1);
      count++;
    }
    i += 2;
  }
  if(count == 0){
    printf("Khong co!");
  }
}
//Question b
int soLeLe(int n, int arr[n]){
  int count = 0;
  printf("So le o cac vi tri le la: \n");
  for(int i = 0; i < n; ){
    if(arr[i] % 2 != 0){
      printf("So %d tai vi tri %d\n", arr[i], i+1);
      count++;
    }
    i += 2;
  }
  if(count == 0){
    printf("Khong co!");
  }
}
//Question c
int sumLe(int n, int arr[n]){
  int sum = 0;
  for(int i = 0; i < n;){
    sum += arr[i];
    i += 2;
  }
  return sum;
}
//Question d
int sumChan(int n, int arr[n]){
  int sum = 0;
  for(int i = 1; i < n;){
    sum += arr[i];
    i += 2;
  }
  return sum;
}
//Question e
int maxArr(int n, int arr[n]){
  int max = arr[0];
  for (int i = 1; i < n; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}
int minArr(int n, int arr[n]){
  int min = arr[0];
  for (int i = 1; i < n; i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}
//Question f
int greatThan(int m, int n, int arr[n]){
  printf("Cac so lon hon %d trong mang la: ", m);
  for(int i = m + 1; i < maxArr(n, arr); i++){
    int count = 0;
    for(int j = 0; j < n; j++){
      if(i == arr[j]){
        count++;
      }
    }
    if(count >= 1){
      printf("%d\t", i);
    }
  }
}
int lessThan(int m, int n, int arr[n]){
  printf("Cac so nho hon %d trong mang la: ", m);
  for(int i = 1; i < m; i++){
    int count = 0;
    for(int j = 0; j < n; j++){
      if(i == arr[j]){
        count++;
      }
    }
    if(count >= 1){
      printf("%d\t", i);
    }
    
  }
}
//Question g
int secondMax(int n, int arr[n]){
  int secondMax = arr[0];
  for(int i = 1; i < n; i++){
    if(secondMax < arr[i] && arr[i] < maxArr (n, arr)){
      secondMax = arr[i];
    }
  }
  return secondMax;
}
//Question h
int secondMin(int n, int arr[n]){
  int secondMin = arr[0];
  for(int i = 1; i < n; i++){
    if(secondMin > arr[i] && arr[i] > minArr (n, arr)){
      secondMin = arr[i];
    }
  }
  return secondMin;
}
//Question i
int duplicateNum(int n, int arr[n]){
  for(int i = 1; i < maxArr(n, arr); i++){
    int count = 0;
    for(int j = 0; j < n; j++){
      if(i == arr[j]){
        count++;
      }
    }
    if(count >= 2){
        printf("%d\t", i);
    }
  }
}


int main(){
  int n;
  printf("Hay nhap so phan tu cua mang: ");
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++){
    do{
      printf("Hay nhap phan tu thu %d cua mang: ", i + 1);
      scanf("%d", &arr[i]);
      if(arr[i] <= 0 || arr[i] != (int)arr[i]){
        printf("So ban nhap khong hop le! Hay nhap lai.\n");
      }
    }while(arr[i] <= 0 || arr[i] != (int)arr[i]);
  }
  printf("\n***********************************************************\n");
  //So chan o vi tri chan
  soChanChan(n, arr);
  printf("\n***********************************************************\n");
  //So le o vi tri le
  soLeLe(n, arr);
  printf("\n***********************************************************\n");
  //Tong so o vi tri le
  printf("Tong cac so o vi tri le la: %d", sumLe(n, arr));
  printf("\n***********************************************************\n");
  //Tong so o vi tri chan
  printf("Tong cac so o vi tri chan la: %d", sumChan(n, arr));
  printf("\n***********************************************************\n");
  //So lon nhat
  printf("Max trong mang la: %d", maxArr(n, arr));
  printf("\n***********************************************************\n");
  //So be nhat
  printf("Min trong mang la: %d", minArr(n, arr));
  printf("\n***********************************************************\n");
  //Cac so lon hon m
  int m;
  printf("Hay nhap mot so bat ky: ");
  scanf("%d", &m);
  greatThan(m, n, arr);
  printf("\n***********************************************************\n");
  //Cac so nho hon m 
  lessThan(m, n, arr);
  printf("\n***********************************************************\n");
  //So lon thu 2 trong mang
  printf("So lon thu 2 trong mang la: %d", secondMax(n, arr));
  printf("\n***********************************************************\n");
  //So nho thu 2 trong mang
  printf("So nho thu 2 trong mang la: %d", secondMin(n, arr));
  printf("\n***********************************************************\n");
  //Cac so trung nhau trong mang la
  printf("Cac so trung nhau trong mang la: ");
  duplicateNum(n, arr);
  printf("\n***********************************************************\n");

  system("pause");
  return 0;
}