#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - sends a formated string to the standard output
 * @format: a character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int len;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	len = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len = len + get_type_func(format[i + 1])(ptr);
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i = i + 1;
	}

	va_end(ptr);
	return (len);
}
