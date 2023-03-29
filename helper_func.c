#include "main.h"
#include <stdarg.h>

/**
 * print_char - print the char
 * @ptr: the char argument
 *
 * Description: print the char
 * Return: the number of the input
 */
int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));

	return (1);
}

/**
 * print_string - print the string to the stdout
 * @ptr: pointer to list of arguments
 * Description: print the string to the stdout
 * Return: the number of character in the string
 */
int print_string(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	int str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len = str_len + 1;
	}

	return (str_len);
}

/**
 * print_percent - print the %
 * @ptr: will not be used
 *
 * Description: print the %
 * Return: the len of % which is 1
 */
int print_percent(__attribute__ ((unused)) va_list ptr)
{
	_putchar('%');

	return (1);
}

/**
 * print_default - print nothing, a function to be returned
 * @ptr: will not be used
 *
 * Description: print nothing, a function to be returned
 * Return: 2
 */
int print_default(__attribute__ ((unused)) va_list ptr)
{
	return (2);
}

/**
 * print_default1 - print nothing, a function to be returned
 * @ptr: will not be used
 * Description: print nothing, function to be returned
 * Return: 1
 */
int print_default1(__attribute__ ((unused)) va_list ptr)
{
	return (1);
}
