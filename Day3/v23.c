#include <stdio.h>


int main()
{

  // ++ -- 
  // increment/decrement
  // unary operator 

  int a = 9;
  printf("%d\n", a);
  a++;
  printf("%d\n", a);
  a--;
  printf("%d\n", a);

  // lvalue - left value = simply means an object that has an identifiable location in memory (having a memory address), must be a variable, cannot be a function / expression / constant
  // rvalue - right value = simply means an object that has no identifiable location in memory (not having a memory address), which return sol value/expression, expression like a+b will return e constant value


  // ex-
  /*
    a++; means a=a+1;

    further:

    (a+b)++; means (a+b) = (a+b) + 1; 

    but here (a+b) is not capable of holding any value , 
    it does not have any memory address.

   */
  

  return 0;
}

