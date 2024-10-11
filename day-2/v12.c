#include <stdio.h>

int anotherScope()
{
  // i cannot access the gj in this function scope
  // printf("%d", gj);
  // return gj;
}

void newFunc(int part)
{

  printf("%d", part);
}

int blockIntoABlock()
{
  int part = 10;
  newFunc(part);
  return part;
}

int fuckYou()
{
  return 0;
}

int files(){
  return 0;
}

int main()
{

  char ch = 'H';
  printf("%c\n", ch);

  blockIntoABlock();

  return 0;
}

