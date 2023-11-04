#include "main.h"
#include <stdio.h>

int main(void) {
    char c = 'X';
    char *s = "Sample String";
    int d = 123;

    convert_c(c);
    convert_s(s);
    convert_percent();
    convert_integer(d);

    return (0);
}
