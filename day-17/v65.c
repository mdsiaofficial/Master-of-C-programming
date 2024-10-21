#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

int right_shift_func_1(int num){
  int count =0;
  while( num ){
    count++;
    num>>=1;
    printf("num = %d | count=%d\n", num, count);
  }
  return count;
}
int right_shift_func_2(int num){
  int count =0;
  while( num ){
    count++;
    num>>=2;
    printf("num = %d | count=%d\n", num, count);
  }
  return count;
}

int main(){
  int n = 425;
  // * 11010011

  printf("count = %d\n", right_shift_func_1(n));
  printf("count = %d\n", right_shift_func_2(n));
  return 0;
}
