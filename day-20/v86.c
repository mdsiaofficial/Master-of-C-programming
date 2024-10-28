#include <stdio.h>




int main(){ 

  int arr [] = {0,1,2,3,4};
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  
  int bcc [10] = {8,5,3,2};
  for(int i = 0; i < 10; i++){
    printf("%d ", bcc[i]);
  }
  printf("\n");


  // * designated initialization
  int nqq [10] = { [0]=7, [3]=2, [4]=16}; 
  for(int i = 0; i < 10; i++){
    printf("%d ", nqq[i]);
  }
}
