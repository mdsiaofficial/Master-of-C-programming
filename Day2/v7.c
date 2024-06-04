#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <math.h>

int main(){
  printf("\n\n");
  printf("short int rnage: [%d] to [%d]", SHRT_MIN, SHRT_MAX);
  printf("\n\n");

  printf("int/long int rnage: [%d] to [%d]", INT_MIN, INT_MAX);
  printf("\n\n");
  
  printf("unsigned int/unsigned long int rnage: [%d] to [%lu]", 0, INT_MAX+INT_MAX);
  printf("\n\n");

  printf("long long int rnage: [%lld] to [%lld]", LONG_LONG_MIN, LONG_LONG_MAX);
  printf("\n\n");

  printf("unsigned long long int rnage: [%llu] to [%llu]", 0ULL, ULLONG_MAX);
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
  __int128_t min4 = -ULONG_LONG_MAX; // not working technically
  __int128_t max4 = (__int128_t)ULONG_LONG_MAX; // not working technically
  unsigned long long int cc = LONG_LONG_MAX+LONG_LONG_MAX;
  printf("int 128 bit range: -%llu to %llu", cc, cc);
  printf("\n\n");
  printf("int 128 bit range: -%llu to %llu", min4, max4);

}