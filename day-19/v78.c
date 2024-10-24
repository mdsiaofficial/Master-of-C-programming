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

// * non-tail recursive
int tex_non_tail (int x){
  if( x == 1) {
    return 0;
  } else {
    return 1+ tex_non_tail(x/2);
  }
}

// * non-tail
void hxx(int  h){
  if(h==0){
    return;
  }

  hxx(h/2);
  printf("%d ", h%2);
}

// * non-tail
void hxx_2(int  y){
  if(y<=0){
    return;
  }

  printf("%d ", y);
  hxx_2(y/2);
  printf("%d ", y);
}
int main(){
  // *
  printf("tail: \n");
  ex_tail(5);
  printf("\n");

  // *
  printf("non-tail: \n");
  ex_non_tail(5);
  printf("\n");

  // *
  printf("non-tail 2: \n");
  printf("%d", tex_non_tail(8));
  printf("\n");


   // *
  hxx(6);
  printf("\n");
  hxx_2(6);
  return 0;

}