#include <stdio.h>
#include <math.h>
int main(){ 
  // int c=0;
  int arr[] = {3,7,1,7,3,6,8,1,4};

  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
}
