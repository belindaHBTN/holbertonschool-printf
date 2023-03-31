#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * get_type_func - match the function
 * @sp: the format identifier that need to be match
 *
 * Description: match the function
 * Return: a function
 */

int (*get_type_func(char sp))(va_list ptr)
{
	pr_t prs[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_num},
		{'d', print_num},
		{'%', print_percent},
		{'\0', NULL}
	};

	int i;

	i = 0;
	while (prs[i].fmtp != '\0')
	{
		if (prs[i].fmtp == sp)
		{
			return (prs[i].f);
		}
		i = i + 1;
	}

	return (NULL);
}
