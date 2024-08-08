#include <stdio.h>


int main(){

  // break
  int n;
  printf("Enter: ");
  scanf("%d", &n);

  while(n!=0){
    if(n<0){
      //
      break;
    }
    printf("Enter: ");
    scanf("%d", &n);
  }

  // continue
  int g = 2;
  for (int i = 1; i <= 20; i++){
    if(i==g){
      g = g + 2;
      //
      continue;
    }
    printf("%d\n", i);
  }


  return 0;
}