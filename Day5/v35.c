#include <stdio.h>


int main(){

  // problems in operator 1
  int i = 9;
  int var = sizeof(i++);
  printf("%d %d\n", i, var);
  // ans = 9 4 (not 10 4)

  // the sizeof operator yields the size (in bytes) of its operand,
  // which may be an expression o a parenthesized name of type.
  // The size is determined from the type of operand.
  // if the type of the operand is a variable length array type, 
  // then the operand is evaluated;
  // otherwise, the operand is not evaluated and the result is an integer constant


  return 0;
}