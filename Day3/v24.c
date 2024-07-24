#include <stdio.h>


int main()
{
// token generation
// lexical analysis is the first phase in the compilation process

// 1
int a = 4, b = 5;
printf("%d\n", a++ + b); // [a] [++] [+] [b]


// 2
printf("%d\n", a + ++b); // [a] [+] [++] [b]

// 3
printf("%d\n", a++ + ++b); // [a] [++] [+] [++] [b]

return 0;
}

