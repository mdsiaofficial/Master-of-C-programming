#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define ll long long int
#define ull unsigned long long int


void bin_to_dec(ll n){
  ull first = 0, second = 1;

}

int main()
{
  ll bin;
  printf("Enter a number: ");
  scanf("%d", &bin);
  ll temp = bin;
  ll dec=0, wei = 1;
  while (bin!=0)
  {
    ll rem = bin%10;
    dec = dec + rem*wei;
    bin = bin/10;
    wei = wei * 2;
  }
  printf("bin %d to dec %d\n", temp, dec);
  

  return 0;
}
