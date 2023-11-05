#include "lp_main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _getchar(va_list args)
{
    char c = va_arg(args, int);
    return _putchar(c);
}
