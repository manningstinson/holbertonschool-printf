#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_percent_sign - Print a percent sign when encountering '%%' in a format string
 * @args: Unused va_list argument
 *
 * Return: Number of characters printed (1)
 */
int lp_print_percent_sign(__attribute__((unused)) va_list args)
{
    putchar('%');
    return (1);
}

/**
 * print_ignore - Ignores the provided argument and returns 0
 * @args: Unused va_list argument
 *
 * Return: 0
 */
int lp_print_ignore(__attribute__((unused)) va_list args)
{
    return 0;
}

/**
 * print_special - Handles special formatting and prints a percent sign and a character
 * @args: Unused va_list argument
 *
 * Return: 2 (the length of "%c")
 */
int lp_print_special(__attribute__((unused)) va_list args)
{
    return 2;
}
