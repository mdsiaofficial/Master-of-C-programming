#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

ull power_of_integer (int base, int expo){
  int result = 1, temp=expo;
  if (temp > 0){
    while (temp--){
      result = result * base;
    }
  }else{
    while (temp++){
      result = result * base;
    }
  }
  return result;
}

int main()
{
  int base, expo;
  scanf("%d %d", &base, &expo);
  if(expo>0) {
    ull result = power_of_integer(base, expo);
    printf("%d^%d = %d\n",base, expo, result);
  }
  else if(expo < 0) {
    ld result = 1.0/(double)power_of_integer(base, expo);
    printf("%d^%d = %.4lf\n",base, expo, result);
  }else {
    printf("%d^%d = %d\n",base, expo, 1);
  }
  
  return 0;
}
