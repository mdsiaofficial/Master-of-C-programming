#include <stdio.h>

int count = 0;
void rf(int n){
  count++;
  if(n<1) {
    return;
  }
  rf(n-1);
  rf(n-3);
  printf("%d\n", n);

}
int main(){
  
  rf(6);
  printf("rf invoked: %d times\n", count);
  return 0;

}