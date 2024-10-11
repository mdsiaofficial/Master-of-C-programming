#include <stdio.h>


int main(){

  int var_1 = 10;
  int var_2 = 12;

  printf("Notun");
  printf("%d %d", var_1, var_2);

  int result = var_1 + var_2 - (var_1 * (var_2 / var_1));

  printf("\n\nhere; %d + %d - ( %d * ( %d / %d )) = %d ", var_1, var_2, var_1, var_2, var_1, result);


  return 0;
}