#include <stdio.h>
#include <math.h>

void min_max (int arr[], int len, int *min, int *max){

  *min = *max = arr[0];

  for(int i=1; i<len; i++){
    if(arr[i] < *min) {
      *min = arr[i];
    }
    if(arr[i] > *max){
      *max = arr[i];
    }
  }
}
int main()
{
  
  int arr[] = {5, 65, 24, 77};
  int min, max;
  min = max = arr[0];
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int i=1; i<len; i++){
    if(arr[i]<min) {
      min = arr[i];
    }
    if(arr[i]>max){
      max = arr[i];
    }
  }
  printf("min = %d, max = %d\n", min, max);

  int brr[] = {5,2,7,1,88,4,3,6,2,5,7,9,4,2,5,66,33,55,44};
  int size = sizeof(brr)/sizeof(brr[0]);
  min_max(brr, size, &min, &max);
  printf("min = %d, max = %d\n", min, max);
}
