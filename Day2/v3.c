#include <stdio.h>
int main(){
  int number = 11;
  int *ptr = &number;

  printf("Value of number variable: %d\n", number);
  
  *ptr = *ptr + 17;
  printf("Value of ptr variable: %d\n", *ptr);
  printf("Value of number variable: %d\n", number);

  number = 19;
  printf("Value of number variable: %d\n", number);
  
}