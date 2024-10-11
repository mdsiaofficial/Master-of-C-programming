#include <stdio.h>


int main()
{

  char a = 7;
  a ^= 5;
  // 7 = 0000 0111
  // 5 = 0000 0101
  //   = 0000 0010 (2)


  printf("%d\n", a);


  return 0;
}

