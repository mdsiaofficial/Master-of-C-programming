#include <stdio.h>
#include <math.h>

int *find_mid (int arr[], int len){
  printf("%x\n%x\n", &arr[len/2], &len);

  return &arr[len/2];
}
int main()
{
  
  int arr[] = {5, 65, 24, 77};
  int len = sizeof(arr)/sizeof(arr[0]);

  int *mid = find_mid(arr, len);
  printf("%d\n", *mid);
  printf("%x\n%x\n", &arr[len/2], &len);
  
}
