#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int add_without_plus_opr_using_half_adder(int *x, int *y){
  int sum,carry;
  while (*y!=0)
  {
    sum = *x^*y;
    carry = (*x&*y)<<1;
    *x=sum;
    *y=carry;
  }

  return sum;
}

int main()
{
  int a,b;
  printf("Enter two number a and b to add to a: ");
  scanf("%d %d", &a, &b);
  int sum = add_without_plus_opr_using_half_adder(&a, &b);

  
  printf("a: %d\nb: %d\nsum: %d\n", a, b, sum);

  return 0;
}

