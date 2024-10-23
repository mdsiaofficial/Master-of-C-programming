#include <stdio.h>
int fun1(int b);
int fun2(int c);
int fun3(int c);

int a = 5;

int main(){


  int a = 100;
  a = fun1(a);
  printf("%d\n", a);

  
  /*
  * in a stack-
  * in every stack frame/ activation record :
  *  - local variables
  *  - function parameters
  *  - return address
  */

  return 0;
}


int fun1(int b){
  b = b+100;
  b=fun2(b);
  return b;
}

int fun2(int c){
  c = c+200;
  c=fun3(c);
  return c;
}

int fun3(int c){
  int x = a+c;
  return x;
}