#include <stdio.h>
#include <math.h>

int main()
{

  int arr[] = {5, 65, 24, 77};
  int *ptr = &arr[3];

  for(int i=3; i>=0; i--){
    printf("%d\n", *ptr);
    ptr--;
    // * here ptr =ptr-1 means ptr = &arr[prev-1]
  }
  printf("\n");


  // ! if any any arithmetic operations do on a pointer which is not pointing to an array... will return undefined behaviour.
  int h = 5;
  int *w = &h;
  printf("%d\n", *w);
  printf("%d\n", *(w+5)); // = 8 

  printf("\n");

  // ! if two pointers are pointing to different arrays then performing subtraction between them leads to undefined behaviour
  int rrr[] = { 0, 1, 2, 3, 4, 5};
  int *p1 = &rrr[0];
  int zzz[] = { 8, 9, 10, 11, 12, 13};
  int *p2 = &zzz[0];

  printf("%d\n", p2-p1); // = -8
}
