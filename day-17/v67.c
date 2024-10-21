  #include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

int fun(){
  static int num = 16;
  return num--;
}

int main(){
  for(fun(); fun(); fun())
  printf("%d ", fun());
  return 0;

  return 0;
}
