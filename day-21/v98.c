#include <stdio.h>
#include <math.h>
#define r 5
#define c 5
int main()
{
  int a[r][c], b[r][c], ab[r][c], sum=0;
  int a_r=r, a_c=c, b_r=r, b_c=c, ab_r = a_r, ab_c = b_c;
  //* Initialize arrays
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      a[i][j] = i + j;
      b[i][j] = (i + 1) * (j + 1);
    }
  }

  //* print matrix a
  printf("matrix - a\n");
  for (int i = 0; i < a_r; i++)
  {
    for (int j = 0; j < a_c; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\n");

  //* print matrix b
  printf("matrix - b\n");
  for (int i = 0; i < b_r; i++)
  {
    for (int j = 0; j < b_c; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }

  if(a_c != b_r) {
    printf("You cannot multiply a and b.");
    return 0;
  }

  printf("\n");
  //* multiply matrix a*b
  for(int i=0; i<a_r; i++){
    for(int j=0; j<b_c; j++){
      for(int k=0; k<b_r; k++){
        sum += a[i][k]*b[k][j];
      }
      ab[i][j] = sum;
      sum=0;
    }
  }

  printf("\n");
  printf("\n");
  //* print matrix ab
  printf("matrix - ab\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d\t", ab[i][j]);
    }
    printf("\n");
  }
}
