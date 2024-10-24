#include <stdio.h>

int fact_iterative(int n){
  int result = 1;
  while (n!=0)
  {
    result = result * n;
    n--;
  }
  return result;
}

int fact_recursive(int x){
  if(x==0){
    return 1;
  }else{
    return x * fact_recursive(x-1);
  }
  
}
int main(){
  
  printf("%d\n", fact_recursive(5));
  printf("%d\n", fact_iterative(5));
  return 0;

}