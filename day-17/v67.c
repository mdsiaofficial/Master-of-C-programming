  #include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

int fun(){
  static int num = 16;
  printf("fun output: %d \n", num);
  return num--;
}

int main(){
  for(fun(); fun(); fun()){
    printf("main output: %d \n\n", fun());
  }

  return 0;
}
