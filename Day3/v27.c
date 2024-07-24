#include <stdio.h>
int main(){

  // bitwise & | ~

  char x = 1, y = 2; 
  // x =    1(0000 0001)
  // y =    2(0000 0010)
  // x&y =  0(0000 0000)

  if(x&y){
    printf("%d x&y\n", x & y);
  }
  if(x && y){
    printf("%d x&&y\n", x && y);
  }

  

  return 0;
}