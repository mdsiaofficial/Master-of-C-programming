#include <stdio.h>
int main(){

  //* bitwise & | ~
  //* bitwise &(and) only true when both are true(1). otherwise false(0) 
  //* bitwise | (or) true when either of the operands is true(1). otherwise false(0)
  //* bitwise ~ (not) inverts the bits of the operand. 1 becomes 0 and 0 becomes 1. 0 becomes 1 and 1 becomes 0
  //* bitwise ^ (xor) true when the operands are different(1). otherwise false(0)

  char x = 1, y = 2; 
  // x =    1(0000 0001)
  // y =    2(0000 0010)
  // x&y =  0(0000 0000)
  // x&&y = 1

  if(x&y){
    printf("%d x&y\n", x & y);
  }
  if(x && y){
    printf("%d x&&y\n", x && y);
  }

  printf("\n");

  x = 7, y = 6; 
  // x =    7(0000 0111)
  // y =    6(0000 0110)
  // x&y =  6(0000 0110)
  // x&&y = 1
  if(x&y){
    printf("%d x&y\n", x & y);
  }
  if(x && y){
    printf("%d x&&y\n", x && y);
  }

  return 0;
}