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
	int i = 0;
	int len = 0;
	va_list ptr;
	int (*print_fn)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(ptr);
				return (-1);
			}

			print_fn = get_type_func(format[i + 1]);
			if (print_fn == NULL)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				len = len + 2;
			}
			else
			{
				len = len + (*print_fn)(ptr);
			}
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
