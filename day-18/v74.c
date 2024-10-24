#include <stdio.h>
//* using dynamic scoping that does't exist on c, just assuming

int a =3;

void n(int *x){
  *x = *x * a; //2 * 2 = 4
  printf("Inside n: a = %d\n", *x); //* 4
}

void m(int *y){
  int a = 1; 
  a = *y - a; // 3-1 = 2
  n(&a); // a =2
  // a= 4
  printf("Inside m: a = %d\n", a); //* 4
}

void main(){
  m(&a); // 3
}