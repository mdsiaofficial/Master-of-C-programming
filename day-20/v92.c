#include <stdio.h>
#include <math.h>
int main(){ 
  // int c=0;
  // int n=83582;
  // int digits = log10(n)+1;
  // int arr[digits];

  // for( int i=0; i<digits; i++){
  //   arr[i] = n%10;
  //   n=n/10;
  // }

  // int more_than_once[digits];
  // for(int i=0; i<digits; i++){
  //   for(int j=0; j<digits; j++){
  //     if(arr[i]==arr[j]) {
  //       more_than_once[i]=1;
  //       c++;
  //       more_than_once[j]=1;
  //       c++;
  //     }
  //   }
  // }

  // printf("%d\n", c);


  int seen[10] = {0};
  int num;
  scanf("%d", &num);

  while(num>0){
    int temp = num%10;
    if(seen[temp]==1){
      break;
    }
    seen[temp]=1;
    num=num/10;
  }

  if(num>0){
    printf("YES");

  }else {
    printf("NO");
  }
}
