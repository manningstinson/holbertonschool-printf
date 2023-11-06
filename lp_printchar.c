#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written (1).
 *         On error, returns -1.
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_char(va_list args)
{
    char c = va_arg(args, int);
    return _putchar(c);
}

