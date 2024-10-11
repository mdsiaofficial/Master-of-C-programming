#include <stdio.h>
int main()
{

  // bitwise >>

  // right shift leading positions are filled with zeros
  // right shift is equivalent 
  // to division by 2^(right operand)


  char b = 3;
  // 3 = 0000 0011
  // 3 >> 1 = _000 0001
  //          0000 0001 (1)
  
  printf("%d\n", b >> 1); // ans= 3 / 2^1 = 3/2 = 1

  char n = 9;
  printf("%d\n", n >> 3); // ans = 9 / 2^3 = 9 / 8 = 1

  char h = 32;
  printf("%d\n", h >> 4); // ans = 32 / 2^4 = 32 / 16 = 2

  
  return 0;
}