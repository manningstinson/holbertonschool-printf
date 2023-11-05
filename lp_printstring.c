#include "main.h"
#include <stdio.h>

int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (str == NULL) {
        str = "(null)";
    }
    return _putstr(str);
}

int _putstr(char *str)
{
    int len = 0;
    while (str[len]) {
        len += _putchar(str[len]);
    }
    return len;
}

