#include <stdio.h>
#include <math.h>

int main()
{
  // * ex 1
  int i=10;
  int *p, *q;
  p=&i;
  q=p;
  printf("p = %x \nq = %x", p, q);

  printf("\n\n");

  // * ex 2
  int j=44, k=22;
  int *m, *g;
  m = &j;
  g = &k;
  printf("m = %x \ng = %x", m, g);

  printf("\n\n");
  // * HW
  int y = 8;
  int *w = &y;
  int *e=w;
  *e = 5;

  printf("e = %x \ny = %d", *e, y);

}
