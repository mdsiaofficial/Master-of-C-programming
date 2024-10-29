#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <math.h>

int main(){
  printf("\n\n");
  printf("short int range: [%d] to [%d]", SHRT_MIN, SHRT_MAX);
  printf("\n\n");

  printf("int/long int range: [%d] to [%d]", INT_MIN, INT_MAX);
  printf("\n\n");
  
  printf("unsigned int/unsigned long int range: [%d] to [%lu]", 0, INT_MAX+INT_MAX);
  printf("\n\n");

  printf("long long int range: [%lld] to [%lld]", LONG_LONG_MIN, LONG_LONG_MAX);
  printf("\n\n");

  printf("unsigned long long int range: [%llu] to [%llu]", 0ULL, ULLONG_MAX);
  printf("\n\n");
  printf("----------------------------------------");
  printf("----------------------------------------");

  printf("\n\n");
  printf("short int [%d] to [%d]", SHRT_MIN, SHRT_MAX);
  printf("\n\n");
  printf("unsigned short int [%u] to [%u]", 0U, USHRT_MAX);
  printf("\n\n");
  printf("int [%d] to [%d]", INT_MIN, INT_MAX);
  printf("\n\n");
  printf("unsigned int [%u] to [%u]", 0U, UINT_MAX);
  printf("\n\n");
  printf("long int [%ld] to [%ld]", LONG_MIN, LONG_MAX);
  printf("\n\n");
  printf("unsigned long int [%lu] to [%lu]", 0U, ULONG_MAX);
  printf("\n\n");
  printf("long long int [%lld] to [%lld]", LONG_LONG_MIN, LONG_LONG_MAX);
  printf("\n\n");
  printf("unsigned long long int [%llu] to [%llu]", 0U, ULLONG_MAX);

  printf("\n\n");
  __int128_t cc = LONG_LONG_MAX+LONG_LONG_MAX;
  printf("int 128 bit range: [-%llu] to [%llu]", (long long)cc, (long long)cc);
  printf("\n\n");
  printf("unsigned int 128 bit range: [0] to [34028236692093846346337460743176821145]\n\n");

}