#include <stdio.h>
#include <limits.h>


int main(){

  int minimum_int = INT_MIN;
  int maximum_int = INT_MAX;

  printf("\nRange of short int/ int 8: \t\t%d to %d", SHRT_MIN, SHRT_MAX);
  printf("\nRange of short int/ int 8: \t\t%d to %d", __INT8_MAX__, SHRT_MAX);
  printf("\nRange of int 32: \t\t%d to %d", INT_MIN, INT_MAX);
  printf("\nRange of unsigned int 32: \t\t%u to %u", 0, UINT_MAX);


  return 0;
}