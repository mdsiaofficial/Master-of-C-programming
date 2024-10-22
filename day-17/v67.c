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

int number(){
    // * static variable can be changed
  static int x=10;
  return x++;
}

int main(){
  for(fun(); fun(); fun()){
    printf("main output: %d \n\n", fun());
  }

  // * static variable can be changed
  printf("\n%d\n", number());
  printf("\n%d\n", number());
  printf("\n%d\n", number());


  return 0;
}
