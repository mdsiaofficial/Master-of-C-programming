#include <stdio.h>

int main()
{

  // right shift
  int i = 1024;
  for (; i; i >>= 1)
  {
    printf("%d\n", i);
  }
  // 11 times


  printf("\n\n");


  // left shift
  i = 1;
  for (; i<2048; i <<= 1)
  {
    printf("%d\n", i);
  }
  // 11 times

  return 0;
}