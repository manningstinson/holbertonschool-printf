#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#ifndef HEADER
#define HEADER
=======
>>>>>>> 2e5f58451f99adbb89439e2845c81dd4318acc22
#include <stdarg.h>

typedef struct formats
{
<<<<<<< HEAD
	char spec;
	int (*print_func)(va_list);
} 
=======
        char spec;
        int (*print_func)(va_list);
}
>>>>>>> 2e5f58451f99adbb89439e2845c81dd4318acc22

formats_t;

int _printf(const char *, ...);
int (*get_format(char))(va_list);
int print_char(va_list);
int print_string(va_list);
int print_digit(va_list);
int print_mod(va_list);
int print_nothing(va_list);
int catch_all(va_list);
int _putchar(char);
int putint(int);

#endif


