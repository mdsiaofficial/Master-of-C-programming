#include <stdio.h>
int main()
{
  for (int i = 0; i < 20; i++)
  {
    switch (i)
    {
      case 0:
        i += 5;
        // break;
      case 1:
        i += 2;
        // break;
      case 5:
        i += 5;
        // break;
      default:
        i += 4;
        // break;
      }
      printf("%d\n", i);
  }
  // 5 10 15 20 with break
  // 16 21 without break

  return 0;
}