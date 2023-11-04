#ifndef CONVERT_H
#define CONVERT_H

// Define the loudpirate_t struct
typedef struct loudpirate {
    char format_specifier; // 'c' for character, 's' for string, '%' for percent, 'd' for decimal integer, 'i' for integer
    char *(*conversion_function)(); // Pointer to a function returning a character pointer
} loudpirate_t;

// Function prototypes for the conversion functions
char *convert_c();
char *convert_s();
char *convert_percent();
char *convert_decimal_integer();
char *convert_integer();

#endif
