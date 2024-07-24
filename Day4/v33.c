#include <stdio.h>


int main()
{

  // comma operator returns the rightmost operand in the expression and it simply evaluates the rest of the operands and finally reject them.

  int a = (2, 0, 23);
  printf("%d\n\n", a);

  int b = ((printf("%s\n", "Ashiq")), printf("%d\n", 44), 1991);
  printf("%d\n\n", b);

  
  // hw
  int v;
  int n;
  n = (v = 13, v + 10);
  printf("%d\n\n", n);


  return 0;
}

