![5](https://github.com/manningstinson/holbertonschool-printf/assets/104523090/23879d3e-cce1-415e-9218-9da390336e19)

# About lp_printpercent.c
## Explaining the code
Sure, let's break down the provided code into individual code blocks and explain it at a junior high level for your README.md document:

```c
#include "main.h"
```
This line includes a custom header file named "main.h." Custom header files often contain function prototypes, data structures, or other declarations used in the program.

```c
/**
 * print_percent - Prints a percent symbol to the standard output.
 * @args: A va_list (not used in this function).
 *
 * Return: The number of characters printed (1).
 */
```
This is a comment block that describes a function named `print_percent`. It explains what the function does, what it takes as an argument, and what it returns. In this case, it returns the number of characters printed (which is always 1), and it doesn't use the `args` argument.

```c
int print_percent(va_list args)
{
    (void)args;
    return _putchar('%');
}
```
This code defines the `print_percent` function. It takes a variable argument list (`va_list`) as its argument, but it doesn't use it, so it includes `(void)args;` to avoid compiler warnings.

Inside the function, it calls the `_putchar` function to print the percent symbol '%' to the standard output. Then, it returns the value 1 to indicate that one character has been printed.

In summary, this code defines a function `print_percent` that prints a single percent symbol '%' to the standard output. It doesn't use the variable argument list (`args`), and it always returns 1 to indicate that one character has been printed.
