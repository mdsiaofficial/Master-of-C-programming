
#include <stdio.h>

int main()
{

  __int8 a = 45;
  printf("\nvalue = %d || __int8 = %d byte",a, sizeof(a));
  __int16 b = 34;
  printf("\n\nvalue = %d || __int16 = %d byte",b,  sizeof(b));
  __int32 c = 66;
  printf("\n\nvalue = %d || __int32 = %d byte",c,  sizeof(c));
  __int64 d = 324;
  printf("\n\nvalue = %d || __int64 = %d byte",d,  sizeof(d));


  return 0;
}