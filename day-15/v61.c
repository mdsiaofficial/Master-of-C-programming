#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ld double
#define ull unsigned long long int

int area_of_rectangle(int len, int brd){
  int area;
  area=len*brd;
  return area;
}

int main()
{
  int l, b, area;

  
  l=9, b=5;
  area = area_of_rectangle (l, b);
  printf("The area of the rectangle is %d.\n", area);

  l=59, b=23;
  area = area_of_rectangle (l, b);
  printf("The area of the rectangle is %d.\n", area);
  
  return 0;
}
