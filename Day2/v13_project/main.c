#include <stdio.h>
#include <stdlib.h>

extern int a; // #1

int b = 15; // #2

extern int c = 22; // #3
int main()
{

    extern int b; // #2

    printf("Hello world! - %d\n", a); // #1

    printf("Hello world! - %d\n", b); // #2

    printf("Hello world! - %d\n", c); // #3

    return 0;
}
