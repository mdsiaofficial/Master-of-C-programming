#include <stdio.h>

int main(){ 

  int arr[] = {89,90,67,21,32,34,56,54,32};
  int size = sizeof(arr)/ sizeof(arr[0]);
  for(int i=0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  for(int i=size-1; i >=0; i--){
    printf("%d ", arr[i]);
  }
  
}
