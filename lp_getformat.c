#include "lp_main.h"
#include <stddef.h>

specifier_t get_specifier(char c)
{
        specifier_t format[] = {
                {'c', print_char},
                {'s', print_string},
                {'%', print_percent},
                {'d', print_int},
                {'i', print_int},
                {0, NULL}
        };
        int i = 0;

        while (format[i].specifier)
        {
                if (format[i].specifier == c)
                {
                        return format[i];
                }
                i++;
        }

        return format[i];
}
