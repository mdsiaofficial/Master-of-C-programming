#include <stdio.h>


int main()
{

  // comma operator returns the rightmost operand in the expression and it simply evaluates the rest of the operands and finally reject them.
  // first evaluate then reject.

  // ex 1
  int a = (2, 0, 23);
  printf("%d\n\n", a);

  // ex 2
  int b = (printf("%s\n", "Ashiq"), printf("%d\n", 44), 1991);
  printf("%d\n\n", b);

  
  // ex 3
  // hw
  int v;
  int n;
  n = (v = 13, v + 10);
  printf("%d\n\n", n);

  // ex 4
  int h = (printf("%s\n", "HI"), 10);
  printf("%d\n\n", h);

  // ex 5
  int ar;
  ar = 6, 7, 8;
  printf("%d\n\n", ar); //6

  (ar = 6), 7, 8;
  printf("%d\n\n", ar); //6

  return 0;
}

