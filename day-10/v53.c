#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void add_without_plus_opr(int *a, int *b){
  if((*b)>0){
    while ((*b)!=0) {
      (*a)++;
      (*b)--;
    }

  }else if((*b)<0){
    while ((*b)!=0) {
      (*a)--;
      (*b)++;
    }
  }
}

int main()
{
  int a,b;
  printf("Enter two number a and b to add to a: ");
  scanf("%d %d", &a, &b);
  add_without_plus_opr(&a, &b);
  printf("a: %d\nb: %d\n", a,b);

  return 0;
}

