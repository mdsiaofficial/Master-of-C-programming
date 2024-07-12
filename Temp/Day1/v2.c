#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <math.h>
// these all are header files

void add(int *a, int *b, long long int *res){
  *res = *a + *b;
}
int main(){

  printf("Preprocessor used to run.");
  // fuction to print. this function came from <stdio.h>
  __int64 x;
  x = 10;
  printf("\n\n%d %x\n\n", x, &x);

  int x1;
  x1 = 104434;
  printf("\n\n%d %x\n\n", x1, &x1);
  
  __int128_t x2;
  x2 = 10;
  printf("\n\n%lld %p\n\n", x2, (void*)&x2);

  int v1 = 102;
  int v2 = 34;
  add(&v1, &v2, &x1);
  printf("%d", x1);

  __uint128_t b7 = 123456789982345678;
  printf("%d", (long long)b7);

}