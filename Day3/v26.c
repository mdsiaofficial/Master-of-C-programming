#include <stdio.h>
int main(){

  int x = 40, y = 60;

  //          total= t
  //  f        t        f      t
  if(x>=y && x!=30 && x<30 || y>50){
    printf("X\n");
  }else{
    printf("Y\n");
  }

  //using not operator
  if(!(x==40)){
    printf("X\n");
  }else{
    printf("Y\n");
  }


  // short circuit in c
  int z = (x < y) && y++;
  printf("%d\n", z);
  printf("%d\n", y);

  z = (x > y) && y++;
  printf("%d\n", z);
  printf("%d\n", y);

  z = (x > y) || y++;
  printf("%d\n", z);
  printf("%d\n", y);

  return 0;
}