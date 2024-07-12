#include <stdio.h>
int main(){
  int two = 2, three = 3, eight = 8;
  printf("The value of two is %d\n", two);

  int result = ((two++) + (three++)) * (eight--) / (three--);
  printf("The result is here when this is a new program with multiple lines of string to print\n the main result is here... %d\n", result);
  printf("The value of two is %d\n", two);
}