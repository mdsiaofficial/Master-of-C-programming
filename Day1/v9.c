#include <stdio.h>

int main()
{

  char ch = 'H';
  printf("%c\n", ch);
  // 72 represents decimal value of H
  char bh = 75;
  printf("%c\n", bh);

  char hj = -75;
  printf("%c\n", hj);


  hj = -128;
  char gj = 128;
  printf("%c - %c\n", hj, gj);

  hj = -127;
  gj = 129;
  printf("%c - %c\n", hj, gj);
  return 0;
}