#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints a string to the standard output.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	int len = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		len += _putchar(str[i]);
		i++;
	}
	return (len);
}
