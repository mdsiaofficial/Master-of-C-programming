#include <stdio.h>
int main()
{

  // bitwise <<

  // left shift trailing positions are filled with zeros
  // left shift is equivalent 
  // to multiplication by 2^(right operand)


  char b = 3;
  // 3 = 0000 0011
  // 3 << 1 = 0000 011_
  //          0000 0110 (6)

  printf("%d\n", b << 1); // ans= 3 * 2^1 = 3*2 = 6

  char n = 9;
  printf("%d\n", n << 3); // ans = 9 * 2^3 = 9 * 8 = 72

  return 0;
}