#include <stdio.h>

int factorial(int n){
  if(n==1){
    return 1;
  }else {
    return n*factorial(n-1);
  }
}

void main(){
  int n=5;
  printf("factorial of 5 = %d\n", factorial(n));

}