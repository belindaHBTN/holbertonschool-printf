#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *
 *
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
		if (format[i] == %)
		{
			if 
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i = i + 1;
	}
}
