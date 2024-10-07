#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime (int n){
  if(n <= 1) return false;
  else if(n == 2 || n == 3) return true;
  for(int i=2; i <= sqrt(n); i++){
    if(n % i == 0) return false;
  }
  return true;
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if(checkPrime(n)) printf("%d is a prime number. \n", n);
  else printf("%d is not a prime number. \n", n);
  
  return 0;
}