#include <stdio.h>


int main(){

  int v = 10;
  // switch only works with integer constants..
  // no float/double 
  switch (v)
  {
  case 1:
    printf("v is 1");
    break;
  case 2:
    printf("v is 2");
    break;
  case 3:
    printf("v is 3");
    break;
  case 4:
    printf("v is 4");
    break;

  case 5:
    printf("v is 5");
    break;
  case 6:
    printf("v is 6");
    break;
  case 7:
    printf("v is 7");
    break;
  case 4+4:
    printf("v is 8");
    break;

  case 2+2+5:
    printf("v is 9");
    break;
  case 2*5:
    printf("v is 10");
    break;

  default:
    printf("Not 1-10\n");
    break;
  }

  return 0;
}