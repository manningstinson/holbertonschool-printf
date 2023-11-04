<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_string - prints a string
 * @args: arguments to format data type
 * Return: Number of characters printed (null byte excluded)
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	fputs(str, stdout);
	return (strlen(str));
}
=======
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_string - prints a string
 * @args: arguments to format data type
 * Return: Number of characters printed (null byte excluded)
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	fputs(str, stdout);
	return (strlen(str));
}
>>>>>>> 2e5f58451f99adbb89439e2845c81dd4318acc22
