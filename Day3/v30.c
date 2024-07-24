#include <stdio.h>
int main()
{

  // bitwise x-or ^

  // both are same = 0
  // different = 1

  int a = 4, b = 3;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("a=%d\nb=%d\n", a,b);

  return 0;
}