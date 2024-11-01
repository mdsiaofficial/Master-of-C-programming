#include <stdio.h>
#include <math.h>

  // ? q2
void fcv(const int *p){
  // *p=0;
}
int main()
{
  // ? q1
  int i=10;
  int *p = &i;
  p = &i;
  
  // ? q2
  const int i2=10;
  fcv(&i2);

  // ? q3
  // how to print the address of var
  printf("Address of i: %p\n", p);
  // for %p - 000000000061FE14
  printf("Address of i: %x\n", p);
  // for %x - 61fe14
  
  // ? q4
  int v = 9;
  int *r = &v;
  int *e;
  *e = *&v;
  printf("%d\n", v);
  printf("%x\n", &v);
  printf("%x\n", r);
  printf("%d\n", *r);
  printf("%d\n", *&v);
  

}
