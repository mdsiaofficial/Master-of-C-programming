#include <stdio.h>

int dam(int x){
  if(x==1){
    return 1;
    
  }else {
    return 1+dam(x-1);
  }
}

void main(){
  int n=5;
  printf("%d\n", dam(n));

}