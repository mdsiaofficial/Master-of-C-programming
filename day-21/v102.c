#include <stdio.h>
#include <math.h>

int main()
{
  int h=9;
  printf("h - %x - %d\n", &h, h);
  int *k = &h;
  k = &h;

  *k = 100;
  //* here * in *k is value of operator
  printf("k - %x - %x - %d\n", &k, k, *k);


  printf("h - %x - %d\n", &h, h);
  printf("h - %x - %d\n", &h, h);

}
