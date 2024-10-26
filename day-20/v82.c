#include <stdio.h>

// * runs for infinite loop
int fx (int j){
  static int i=50;
  int k;
  if(i==j){
    printf("-anything-");
    k=fx(i);
    return 0;
  }else {
    return 0;
  }
}
int main(){
  
  fx(50);

  return 0;

}