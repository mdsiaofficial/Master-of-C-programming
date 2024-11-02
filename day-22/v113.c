#include <stdio.h>

int main(){
  
  int arr[] = {1,23,4,6};
  int sum = 0;
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int *i = &arr[0]; i<&arr[len]; i++){
    sum += *i;
  }

  printf("Sum = %d\n", sum);
  return 0;

}