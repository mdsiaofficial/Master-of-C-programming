#include <stdio.h>
void nnn(int *b, int *a){
  *b+=5;
  *a+=10;
}
int main(){
  int a = 69;

  printf("a=%d, &a=%x\n", a, &a);
  // a=69, &a=61fe1c
  a++;
  printf("now a=%d\n", a);
  // now a=70
  int *b = &a;
  printf("b=%x, &b=%x *b=%d\n", b, &b, *b);
  // b=61fe1c, &b=61fe10 *b=70
  *b+=1;
  printf("b=%x, &b=%x *b=%d\n", b, &b, *b);
  // b=61fe1c, &b=61fe10 *b=71
  printf("a=%d, &a=%x\n", a, &a);
  // a=71, &a=61fe1c
  
  
  int x=10, y=8;
  nnn(&y, &x);
  // x=20 y=13
  printf("x=%d y=%d\n", x, y);
  // x=20 y=13


}