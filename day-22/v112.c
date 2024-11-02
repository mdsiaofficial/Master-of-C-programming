#include <stdio.h>

int main(){
  
  int arr[] = {1,23,4,6};
  int *p = &arr[0];
  int *q = &arr[3];

  printf("%x %x %d\n",p, q, p<=q);
  printf("%x %x %d\n",p, q, p>=q);
  // 61fe00 61fe0c 1
  // 61fe00 61fe0c 0

  q = &arr[0];
  printf("%x %x %d\n",p, q, p<=q);
  printf("%x %x %d\n",p, q, p>=q);
  // 61fe00 61fe00 1
  // 61fe00 61fe00 1


  // hw
  int  arr2[] = {5, 16, 7, 89, 45, 32, 23, 10};
  int *m = &arr2[1], *j =  &arr2[5];

  printf("%d \n", *(m+3)); // 45
  printf("%d \n", *(j-3)); // 7
  printf("%d \n", j-m); // 4
  printf("%d \n", m<j); // 1
  printf("%d \n", *m<*j); // 1

  return 0;

}