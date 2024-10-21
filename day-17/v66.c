#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

void f1(int a, int b){
  int c;
  c=a;a=b;b=c;

}

void f2(int *a, int *b){
  int c;
  c=*a;*a=*b;*b=c;
  
}

int main(){
  int x=5,y=9;
  f1(x,y);
  printf("x=%d, y=%d\n", x,y);
  f2(&x, &y);
  printf("x=%d, y=%d\n", x,y);

  return 0;
}
