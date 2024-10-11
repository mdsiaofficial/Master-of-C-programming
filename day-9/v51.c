#include <stdio.h>
#include <math.h>

int factorial(int n){
  if(n == 0) return 1;
  else return (n * factorial(n-1));
}

int main()
{
  int n, sum=0;
  printf("Enter a number: ");
  scanf("%d", &n);
  int temp = n;
  while(temp!=0){
    int remainder = temp % 10;
    sum += factorial(remainder);
    temp = temp/10;
  }
  if(sum == n) printf("%d is strong number. \n", n);
  else printf("%d is not a strong number. \n", n);
  

  
  return 0;
}