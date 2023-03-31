#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

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
	char *str;
	int str_len;

	str = va_arg(ptr, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
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
 * print_num - print the integer
 * @ptr: pointer to the list of arguments
 *
 * Description: print the integer
 * Return: an integer - the length of the characters printed
 */
int print_num(va_list ptr)
{
	int num;
	int divide;
	int len;

	num = va_arg(ptr, int);
	divide = 1;
	len = 0;

	if (num < 0)
	{
		len = len + _putchar('-');
		num = num * (-1);
	}

	while ((num / divide) > 9)
	{
		divide = divide * 10;
	}

	while (divide != 0)
	{
		len = len + _putchar('0' + (num / divide));
		num = num % divide;
		divide = (divide / 10);
	}

	return (len - 1);
}
