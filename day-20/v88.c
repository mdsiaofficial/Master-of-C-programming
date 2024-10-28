#include <stdio.h>

#define N 10

int main(){ 

  int arr[10];
  for(int i=0; i<10; i++){
    printf("Enter value at index %d: ", i);
    scanf("%d", &arr[i]); 
  }
  

  for(int i=0; i<N; i++){
    printf("arr[%d]: %d\n", i, arr[i]);
  }
}
