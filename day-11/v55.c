#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ull unsigned long long int


void fibonacci(ull n, ull *fibolist){
  ull first = 0, second = 1;
  fibolist[0] = first;
  fibolist[1] = second;
  for (ull i = 2; i <= n; i++)
  {
    fibolist[i] = fibolist[i - 2] + fibolist[i - 1];
  }
  for (ull i = 0; i <= n; i++)
  {
    printf("[%d] = %d",i, fibolist[i]);
    if (i <= n - 1)
      printf("\t\t\t\t");
    if (i == n)
      printf("(%dth)", n);
  }
}

int main()
{
  ull n;
  printf("Enter a number: ");
  scanf("%d", &n);
  ull fibolist[n];
  // fibonacci(n, &fibolist);
  // Pass just 'fibolist' to let it decay into a pointer
  fibonacci(n, fibolist); 

  return 0;
}
