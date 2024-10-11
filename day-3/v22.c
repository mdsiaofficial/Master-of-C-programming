#include <stdio.h>


int main()
{

  // 
  // arithmetic op
  //

  int a=9, b=5;
  // scanf("%d  %d", &a, &b);
  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);

  int x = 2, y = 3, z = 4, h = 5;
  printf("a * b / c = %d\n", x*y/z);
  printf("x + y - z = %d\n", x + y - z);
  printf("x + y * h - z %% x = %d\n", x + y * h - z % x);

  return 0;
}

