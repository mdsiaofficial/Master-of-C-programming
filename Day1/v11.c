#include <stdio.h>

// Quiz

int main(){


// 1
  printf("length of that string: %d\n", printf("%s", "Hello Ashiq! ")); // it returns the successful characters printed

// 2
  printf("%10s\n\n", "Hello"); // takes space as 10 character space

// 3
  char c = 255;
  c = c + 10;
  printf("%d\n", c); // it prints 255 + 10 = 265 which is 9
  // ans = 265 mod 2^8 (char is 8 bit long)

// 4
  unsigned i = 1;
  int j = -4;
  printf("%u\n\n", i + j);

  return 0;
}