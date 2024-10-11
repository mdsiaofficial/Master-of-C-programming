#include <stdio.h>


int func1(){
  printf("%s\n\n", "ashiq");
  return 6;
}
int func2(){
  printf("%s\n\n", "chester");
  return 9;
}

int main(){

  // precedence of operator - which operator evaluated first
  // associativity of operators - when precedence are same then it comes
  //

  int at;
  at = func1() + func2();
  printf("%d\n", at);

  // hw
  int a = 45, b = 56, c = 66, d = 22;
  // true    false 
  if(a<=b == d>c){
    printf("True\n");
  }else{
    printf("False");
  }

  
  return 0;
}