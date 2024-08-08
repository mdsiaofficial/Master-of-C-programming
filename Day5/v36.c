#include <stdio.h>


int main(){

  // problems in operator 2
  int a = 1; //1- 2-1
  int b = 1; //1- 2-1
  int c = ++a || b++; //
  int d = b-- && --a; //
  printf("%d %d %d %d\n", a, b, c, d);
  // 1 0 1 1

  return 0;
}