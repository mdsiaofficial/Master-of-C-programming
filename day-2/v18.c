#include <stdio.h>

// Quiz


#define STRING "%s\n"
#define ASHIQ "Hi there! How are you?"

int main()
{


  // 1
  int var = 056; 
  // heading zero numbers are measured as OCTAL numbers
  printf("%d\n", var); // %d - decimal
  printf("%o\n", var); // %o - octal
  // output: 46


  // 2
  printf(STRING, ASHIQ);

  return 0;
}

