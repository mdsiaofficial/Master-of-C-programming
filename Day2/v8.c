#include <stdio.h>


int main(){
  unsigned int a = 4294967295;
  printf("%u\n\n", a);

  unsigned int b = 4294967296;
  printf("%u", b);

  int c = 2147483647;
  printf("\n%d", c);
}