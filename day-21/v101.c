#include <stdio.h>
#include <math.h>

int main()
{
  int n; 
  printf("Enter array length: ");
  scanf("%d", &n);

  int arr1[n]; 
  //* this n is called the variable length array
  
  for(int i=0; i<n; i++){
    scanf("%d", &arr1[i]);
  }

  const int arr2[]={1,2,3,4,5}; //* cannot change the array variable

  for(int i=0; i<n; i++){
    printf("%d ", arr1[i]);
  }
}
