#include <stdio.h>


int main()
{

  char res;
  int mark = 87;
  if(mark>33){
    res = 'p';
  }else{
    res = 'f';
  }
  printf("%c\n", res);
  res = mark > 80 ? 'a' : 'b';
  printf("%c\n", res);


  // HW
  int v1 = 75, v2 = 56;
  int n;

  n = sizeof(v1) ? (v2 > 23 ? (v1 == 75 ? 'A' : 0) : 0) : 0;
  printf("%d\n", n);


  return 0;
}

