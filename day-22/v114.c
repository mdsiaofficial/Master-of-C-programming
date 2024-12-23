#include <stdio.h>

int main(){
  
  int arr[] = {1,23,4,6};
  *arr = 10; // 10 23 4 6
  printf("%d\n",arr); // 10
  printf("%d\n",arr[0]); // 10

  *(arr+2) = 102; // 10 23 102 6
  printf("%d\n",arr[2]);  // 102
  printf("%d\n",*(arr+2)); // 102


  int sum = 0;
  // 10 23 102 6
  for(int *i = arr; i<=arr+3; i++){
    sum+=*i;
  }
  printf("%d\n", sum); //141

  // printf("%x\n", arr++); //! not allowed arr++
  printf("%x\n", arr+1); //* allowed arr+1 
  printf("%d\n", *(arr+1)); //* allowed *(arr+1)
  int *b = arr;
  printf("%d\n", *(b++)); //* allowed *(b++)
  // printf("%d\n", *(arr++)); //! not allowed *(arr++)

  return 0;

}