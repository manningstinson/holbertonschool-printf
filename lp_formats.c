#include <stdarg.h>
#include "main.h"
#include <stddef.h>

/**
 * _printf - Emulate the behavior of the printf function.
 * @format: A string with format specifiers.
 * Return: The number of characters printed (or -1 on error).
 */

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    while (*format)
    {
        specifier_t specifier;
        int (*specifier_func)(va_list);

        if (*format == '%')
        {
            format++;
            specifier = get_specifier(*format);
            specifier_func = specifier.print_func;

            if (specifier_func)
                count += specifier_func(args);
            else if (*format)
            {
                count += _putchar('%');
                count += _putchar(*format);
            }
            else
                return (-1);
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }
    va_end(args);
    return (count);
}

