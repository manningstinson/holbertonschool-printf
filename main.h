#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>

typedef struct specifier
{
        char specifier;
        int (*print_func)(va_list args);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
specifier_t get_specifier(char c);

#endif
