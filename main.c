#include <stdio.h>
#define DIM 128


void reverse(int arr[], int n){
  int temp = 0;
  for(int i=0; i<n/2; i++){
    temp = arr[n-1-i];
    arr[n-1-i] = arr[i];
    arr[i] = temp;
  }
}

void print_arr(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d", arr[i]);
  }
}

int main(void){
  int n = 9;
  int arr[DIM] = {1,2,3,4,5,6,7,8,9};
  print_arr(arr, n);
  printf("\n");
  reverse(arr, n);
  print_arr(arr, n);
  printf("\n");






}
