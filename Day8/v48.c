#include <stdio.h>
int main()
{
  int n=10;

  // pyramid
  for(int i=1; i<=n; i++){
    for(int j=1; j<=2*n-1; j++){
      if( j >= n-(i-1) && j<= n+(i-1)){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  printf("\n");

  // // reverse pyramid
  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=2*n-1; j++){
  //     if( i >= i && i<= 2*n-1-i){
  //       printf("*");
  //     }
  //     else{
  //       printf(" ");
  //     }
  //   }
  //   printf("\n");
  // }

  return 0;
}