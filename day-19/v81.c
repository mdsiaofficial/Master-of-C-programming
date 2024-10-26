#include <stdio.h>

void stars (int n){
  
  if(n>1) {
    stars(n-1);
  }

  for(int i=0; i<n; i++){
    printf(" * ");
  }
  
}
int main(){
  
  stars(4);
  // sum of k natural numbers... k*(k+1) / 2
  return 0;

}