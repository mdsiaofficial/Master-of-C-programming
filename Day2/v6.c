#include <stdio.h>
#include <stdint.h>
#include <limits.h>
int main(){
  int six = 23;
  int *ptr = &six;
  printf("\tINT\n");
  printf("value: %d\naddress: %x\n", six, &six);
  printf("size: %d\naddress: %x\n", sizeof(six), &six);

  printf("\n\n");
  __int64 six2 = 23;
  __int64 *ptr2 = &six2;

  printf("\tINT 64 bit\n");
  printf("value: %d\naddress: %x\n", six2, &six2);
  printf("size: %d\naddress: %x\n", sizeof(six2), &six2);

  printf("\n\n");
  __int128_t six3 = 25;
  // __int128_set(&six3, 25);
  __int128_t *ptr3 = &six3;

  printf("\tINT 128 bit\n");
  printf("value: %lld\naddress: %x\n", (long long)six3, &six3);
  printf("size: %d\naddress: %x\n", sizeof(six3), &six3);

    printf("\n\n");

  long long int six4 = 55;
  printf("\tlong long INT\n");
  printf("value: %lld\naddress: %x\n", six4, &six4);
  printf("size: %d\naddress: %x\n", sizeof(six4), &six4);


    printf("\n\n");
  int min = INT_MIN;
  int max = INT_MAX;
  printf("int range: %d to %d", min, max);


    printf("\n\n");
  __int64 min2 = INT64_MIN;
  __int64 max2 = INT64_MAX;
  printf("int 64 bit range: %lld to %lld", min2, max2);


    printf("\n\n");
  long long int min3 = LONG_LONG_MIN;
  long long int max3 = LONG_LONG_MAX;
  printf("long long int range: %lld to %lld", min3, max3);

    printf("\n\n");
  __int128_t min4 = INT64_MIN;
  __int128_t max4 = INT64_MAX;
  printf("int 128 bit range: %lld to %lld", (long long)min4, (long long)max4);


}