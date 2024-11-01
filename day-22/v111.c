#include <stdio.h>

int main(){
  
  int arr[] = {1,23,4,6};
  int *p = &arr[0];

  printf("%d\n", *(p++));
  printf("%d\n", *p);
  return 0;

}