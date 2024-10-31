#include <stdio.h>
#include <math.h>

int main()
{
  
  //! this is dangerous - because the pointer is not initialized
  int *t;
  printf("t - %x - %d\n", &t, *t);

  //! this is dangerous - because the pointer is not initialized
  int *y;
  *y = 4;
  printf("y - %x - %d\n", &y, y);
}
