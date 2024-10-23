#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "fun.c"
#include "./func/fun1.c"


#define ll long long int
#define ld double
#define ull unsigned long long int
int fun(int, int);
int main(){

  printf("%d\n", fun(1,2));
  printf("%d\n", fun1(12,12));

  return 0;
}
