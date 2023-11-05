#include "main.h"
#include <stdio.h>

int print_int(va_list args)
{
    int n = va_arg(args, int);
    int len = 0;
    int divisor = 1;
    if (n < 0) {
        len += _putchar('-');
        divisor = -divisor;
    }
    while ((n / divisor) > 9 || (n / divisor) < -9)
        divisor *= 10;
    while (divisor != 0) {
        len += _putchar((n / divisor) + '0');
        n = n % divisor;
        divisor /= 10;
    }
    return len;
}
