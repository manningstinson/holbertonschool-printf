#include "main.h"
#include <stddef.h>

/**
 * get_specifier - Returns the printing function associated with a specifier.
 * @c: The specifier character.
 *
 * Return: A specifier_t struct containing the specifier character and its
 * associated printing function, or NULL if the specifier is not found.
 */

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
