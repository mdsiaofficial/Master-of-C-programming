#include <stdio.h>

int main()
{

  float pi_float = 3.14159265;
  double pi_double = 3.14159265358979321;
  long double pi_long_double = 3.141592653589793213456L;

  printf("float size %d value: %.16f\n\n", sizeof(float), pi_float); // float standard .6
  printf("double size %d value: %.16lf\n\n", sizeof(double), pi_double); // double standard .16
  printf("long double size %d value: %.21Lf\n\n", sizeof(long double), pi_long_double); // long double standard .19

  int tr = 5 / 11;
  printf("tr = %d\n", tr);

  float hr = 5 / 11;
  printf("hr = %f\n", hr);

  float jr = 5.0 / 11.0; // correct
  // float jr = (float)5 / (float)11; // correct
  printf("jr = %f\n", jr);

  return 0;
}