#include <ctype.h> // toupper
#include <string.h> // NULL
#include <stdio.h>


void format_name(char* name) {

    if (name == NULL) return;

    int next_index = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0) {
            name[i] = (char)toupper(name[i]);
        }
        if (name[i] == '-') {
            next_index = i + 1;
            name[i] = ' ';
        }
        if (i == next_index) {
            name[i] = (char)toupper(name[i]);
        }
    }

}

int main(int argc, char** argv) {

    (void)argc; (void)argv; // Silence -Wunused-value

    char string1[12] = "this-string";
    format_name(string1);
    printf("String1: %s\n", string1);
    
    char string2[22] = "this-string-is-longer";
    format_name(string2);
    printf("String2: %s\n", string2);

}