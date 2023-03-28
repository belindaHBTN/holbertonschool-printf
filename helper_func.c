#include "main.h"

int print_char(va_list ptr)
{
    _putchar(va_arg(ptr, char));
    return (1);
}

int print_string(char *str)
{
	int str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len = str_len + 1;
	}

	return (str_len);
}

int print_percent()
{
	_putchar('%');

	return (1);
}
