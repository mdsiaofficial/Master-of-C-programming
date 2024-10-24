#include <stdio.h>

// * tail recursive
void ex_tail (int x){
  if( x== 0) {
    return;

  }else {
    printf("%d\n", x);
    
  }
  return ex_tail(x-1);
}


// * non-tail recursive
void ex_non_tail (int x){
  if( x== 0) {
    return;
  }
  ex_non_tail(x-1);
  printf("%d\n", x);
}


int main(){
  // *
  printf("tail: \n");
  ex_tail(5);
  printf("\n");
  
  // *
  printf("non-tail: \n");
  printf("\n");
  ex_non_tail(5);
  return 0;

}