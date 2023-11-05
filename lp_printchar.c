#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_char(va_list args)
{
    return _putchar(va_arg(args, int));
}

