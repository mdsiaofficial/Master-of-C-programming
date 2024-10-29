#include <stdio.h>
#include <math.h>
int main()
{
  // int c=0;
  int arr[3][6] = {
      {3, 7, 1, 7, 3, 6},
      {3, 7, 1, 7, 3, 6},
      {3, 7, 1, 7, 3, 6}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 6; j++)
    {

      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
