#include <stdio.h>

int main()
{

  for (int i = 1; i <= 10; i++)
  {
    printf("v-%d\n", i);
  }

  int b = 10;
  while (b)
  {
    printf("%d\n", b);
    b--;
  }
  
  return 0;
}