#include <stdio.h>
#include <stdlib.h>

int main()
{


    int value;

    // add.c using
    value = increment();
    value = increment();
    value = increment();
    printf("%d\n", value);

    // dyna.c using
    int newValue;
    newValue = dyna(7);
    newValue = dyna(10);
    newValue= dyna(22);
    printf("%d\n", newValue);

    // addGlobal using
    value = incrementGlobal();
    value = incrementGlobal();
    value = incrementGlobal();
    printf("%d\n", value);


    // subGlobal using
    value = sub();
    value = sub();
    value = sub();
    printf("%d\n", value);

    return 0;
}
