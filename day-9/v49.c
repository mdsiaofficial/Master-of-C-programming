#include <stdio.h>
int main()
{
  int n,result=0,quotient,remainder;
  printf("Enter a number: ");
  scanf("%d", &n);

  quotient=n;
  while(quotient!=0){
    remainder=quotient%10;
    result = result*10 + remainder;
    quotient = quotient/10;
  }

  if(result == n){
    printf("%d is a palindrome number.\n", n);
  }else{
    printf("%d is not a palindrome number. \n");
  }

  return 0;
}