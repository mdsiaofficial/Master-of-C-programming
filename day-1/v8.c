#include <stdio.h>
#include <limits.h>

int main(){

  unsigned int var = UINT_MAX;
  printf("var = %u\n", var);
  unsigned int har = UINT_MAX+6;
  printf("var = %u\n", har);

  int dar = INT_MAX;
  printf("dar = %d\n", dar);
  int tar = INT_MAX+1;
  printf("dar = %d\n", tar);

  return 0;
}