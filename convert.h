#ifndef CONVERT_H
#define CONVERT_H

#include <stdarg.h>

/**
 * struct loudpirate - Structure for format specifier and conversion function
 * @format_specifier: The format specifier character
 * @conversion_function: Pointer to the conversion function
 */
typedef struct loudpirate {
    char format_specifier;
    char *(*conversion_function)(va_list args);
} loudpirate_t;

// Declaration of conversion functions
char *convert_c(va_list args);
char *convert_s(va_list args);
char *convert_percent(va_list args);
char *convert_decimal_integer(va_list args);
char *convert_integer(va_list args);

#endif
