#include <stdio.h>
#include <math.h>

int main()
{
  
  int arr[] = {5, 65, 24, 77};
  int *ptr = &arr[0];
  for(int i=0; i<4; i++){
    printf("%d\n", *ptr);
    ptr++;
  // * here ptr =ptr+1 means ptr = &arr[prev+1] 
  }

  // ! if any any arithmetic operations do on a pointer which is not pointing to an array... will return undefined behaviour.

}
