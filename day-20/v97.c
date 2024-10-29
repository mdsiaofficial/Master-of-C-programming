#include <stdio.h>
#include <math.h>
int main()
{
/* 
8 3 9 0 10
3 5 17 1 1
2 8 6 23 1  
15 7 3 2 9
6 14 2 6 0
*/
  int arr[5][5];
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  int row[5]={0};
  int col[5]={0};
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      row[i] +=arr[i][j];
      col[j] +=arr[i][j];
    }
  }

  for(int i=0; i<5; i++){
    printf("%d ", row[i]);
  }
  printf("\n");
  for(int i=0; i<5; i++){
    printf("%d ", col[i]);
  }
// 30 27 40 36 28 
// 34 37 37 32 21
}
