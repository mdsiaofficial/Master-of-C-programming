#include <stdio.h>

int main()
{

  // problem 1
  int i = -5;
  while(i<=5){
    if(i>=0){
      break;
    }else{
      i++;
      continue;
    }
    printf("%d\n", i);
    printf("hello\n");
    
  }
  // 0 times

// problem 2
  int j  = 0;
  for (printf("one\n"); j < 3 && printf(""); j++);
  {
    printf("two\n");
  }
  // output :
  // one
  // two

  // expected output :
  // one
  // two
  // two
  // two

  
  return 0;
}