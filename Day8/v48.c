#include <stdio.h>
int main()
{
  int n=11;

  // pyramid
  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=2*n-1; j++){
  //     if( j >= n-(i-1) && j<= n+(i-1)){
  //       printf("*");
  //     }
  //     else{
  //       printf(" ");
  //     }
  //   }
  //   printf("\n");
  // }
  // printf("\n");

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

  // easy
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      printf(" ");
    }
    for(int k=1; k<=2*i-1; k++){
      printf("*");
    }
    printf("\n");
  }

    printf("\n");
    printf("\n");

  // reverse easy
  for(int i=n; i>=1; i--){
    for(int j=i; j<n; j++){
      printf(" ");
    }
    for(int k=1; k<=2*i-1; k++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}