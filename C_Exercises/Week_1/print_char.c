/*
Performs some character manipuations with ASCII and prints the results.
*/

#include <stdio.h>

int main() {
    char c = 'F';
    printf("%c\n", c + 3);
    printf("%d\n", c + 3);

    return 0;
}

//Using %c, it is possible to "add" to a character and print another one. 
//Using %d, it is possible to print characters as integers as their corresonding ASCII value.
