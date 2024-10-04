#include <stdio.h>
#include <math.h>
int main()
{
  int n,result=0,remainder;
  printf("Enter a number: ");
  scanf("%d", &n);
  int c =  (n == 0) ? 1 : log10(n) + 1;
  int cpy=n;
  int sum = 0;
  for(int i=0; i<c; i++ ){
    remainder = n%10;
    sum += pow(remainder, c);
    n = n/10;
  }
  if(sum == cpy) printf("%d is an Armstrong number.\n", cpy);
  else printf("%d is not an Armstrong number.\n", cpy);
  
  return 0;
}