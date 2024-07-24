#include <stdio.h>

#define pi 3.14159 // #1

#define value 90 // #2
#define VALUE 90 // #2

#define add(a, b) a+b // #3 #5


// #4
#define greater(a, b)  \
  if (a > b)           \
    printf("%d\n", a); \
  else                 \
    printf("%d\n", b); \

int main()
{

  // constant or #define

  printf("%f\n", pi); // #1
  printf_s("%f\n", pi); // #1

  // int value = 30; // #2

  // error =>
  // error: expected identifier or '(' before numeric constant
  //  #define value 90
  //                ^~
  // note: in expansion of macro 'value'
  //    int value = 30;
  //        ^~~~~

  printf("%d\n", value); // #2
  printf("%d\n", VALUE); // #2

  printf("%d\n", add(4, 2)); // #3

  greater(3, 5); // #4

  // #5
  printf("result of a * b + c: %d\n", 7 * add(3, 5));
  // we would say it will 7 * 8 = 56. but
  // it will be 7 * 3 = 21 + 5 = 26 (ans)




  // Pre-defined macro for Date and Time
  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);
  return 0;
}

