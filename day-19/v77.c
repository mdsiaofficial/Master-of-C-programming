#include <stdio.h>
int n=1;
void odd();
void even();


void main(){
  odd();

}


void odd(){
  if(n<=10) {
    printf("%d\n", n+1);
    n++;
    even();
  }
  return;
}
void even(){
  if(n<=10) {
    printf("%d\n", n-1);
    n++;
    odd();
  }
  return;
}