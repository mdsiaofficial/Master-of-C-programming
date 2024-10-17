#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

void perfect_number(int n){
  int sum=0;
  for(int i=1; i<n; i++){
    if(n%i==0) sum+=i;
  }
  if(sum==n) printf("%d is a perfect number.\n", n);
  else printf("%d is not a perfect number.\n", n);
}

void perfect_number_low_tc(int n){
  int sum=0;
  for(int i=1; i*i<n; i++){
    if(n%i==0) {
      sum+=i;
      if(i!=n/i && n/i!=n){
        sum+=n/i;
      }
    }
  }
  if(sum==n) printf("%d is a perfect number.\n", n);
  else printf("%d is not a perfect number.\n", n);
}
int main()
{
  int n; scanf("%d", &n);
  
  perfect_number(n);
  perfect_number_low_tc(n);
  
  return 0;
}
