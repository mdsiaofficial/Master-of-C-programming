#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ull unsigned long long int


int main()
{
  int n=5;
  int c=1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      printf("%d ", c);
      c++;
    }
    printf("\n");
  }

  return 0;
}
