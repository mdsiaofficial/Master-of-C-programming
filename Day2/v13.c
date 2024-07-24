#include <stdio.h>

int meGlobal; // its value is 0 by default
int main()
{
  printf("%d\n", meGlobal);

  int me;
  printf("%d\n", me);

  auto int meAuto; //it takes some garbage value in the memory
  printf("%d\n", meAuto);
  return 0;
}