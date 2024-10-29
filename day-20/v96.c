#include <stdio.h>
#include <math.h>
int main()
{
  // int c=0;
  int arr[2][3][6] = {
      {{3, 7, 1, 7, 3, 6},
       {3, 7, 1, 7, 3, 6},
       {3, 7, 1, 7, 3, 6}},
      {{3, 7, 1, 7, 3, 6},
       {3, 7, 1, 7, 3, 6},
       {3, 7, 1, 7, 3, 6}}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for(int k=0; k<6; k++){
        printf("%d ", arr[i][j][k]);
      }
      printf("\n");

    }
    printf("\n");
    printf("\n");
  }
}
