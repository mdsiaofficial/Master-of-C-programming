#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

void sum(int a, int b){
  a = 40, b = 55;
}

void swap(int *a, int *b){
  //* &x = reference
  //* *x = dereference
  printf("a=%x b=%x\n", a, b);
  printf("a=%d b=%d\n", *a, *b);
  printf("a=%x b=%x\n", &a, &b);

  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int x, y;

  x = 9, y = 5;
  sum(x, y); //* call by value

  // printf("x=%d y=%d\n", x, y);

  swap(&x, &y); //* call by reference (address)
  printf("x=%d y=%d\n", x, y);
  printf("x=%x y=%x\n", &x, &y);
  //* &x = reference
  //* *x = dereference

  return 0;
}
