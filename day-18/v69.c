#include <stdio.h>


void fun1(){
  printf("Hello World!\n");
  fun2();
}
void fun2(){
  printf("Bye World!\n");
  fun3();
}
void fun3(){
  printf("Bye Bye World!\n");
  fun4();
}
void fun4(){
  printf("Bye Bye Bye World!\n");
  printf("end\n");

}


int main(){

  fun1();
  
  /*
  * in a stack-
  * in every stack frame/ activation record :
  *  - local variables
  *  - function parameters
  *  - return address
  */

  return 0;
}
