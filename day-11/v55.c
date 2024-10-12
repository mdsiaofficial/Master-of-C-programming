#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void fibonacci(int n, int *fibolist){
  int first = 0, second = 1;
  fibolist[0] = first;
  fibolist[1] = second;
  for (int i = 2; i <= n; i++)
  {
    fibolist[i] = fibolist[i - 2] + fibolist[i - 1];
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d", fibolist[i]);
    if (i <= n - 2)
      printf(" ");
    if (i == n - 1)
      printf("(%dth)", n);
  }
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int fibolist[n];
  // fibonacci(n, &fibolist);
  // Pass just 'fibolist' to let it decay into a pointer
  fibonacci(n, fibolist); 

  return 0;
}
