#include <stdio.h>
int main()
{
  int x = 3;
  // 3
  if (x == 2);x = 0;
  // 0
  if (x == 3)x++;
  else x += 2;
  // 0+2 = 2

  printf("x = %d\n", x);
  // 2
  return 0;
}