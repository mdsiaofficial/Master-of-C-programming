#include <stdio.h>


int main()
{

  int var = 32;
  printf("%d\n", var);
  var = 21;
  printf("%d\n", var);

  const int bar = 8;
  printf("%d\n", bar);
  // bar = 4; // this carries an error
  
  // error: assignment of read-only variable 'bar'
  //  bar = 4; // this carries an error
  //      ^

  return 0;
}

