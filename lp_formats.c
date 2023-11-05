#include <stdarg.h>
#include "main.h"
#include <stddef.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            specifier_t specifier = get_specifier(*format);
            int (*specifier_func)(va_list) = specifier.print_func;
            
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

