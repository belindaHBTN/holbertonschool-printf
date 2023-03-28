#include "main.h"
#include <stdlib.h>

int (*get_type_func(char *sp))(va_list ptr)
{
	pr_t prs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (prs[i].fmtp != NULL)
	{
		if (strcmp(prs[i].fmtp, sp) == 0)
		{
			return (prs[i].f);
		}
		i = i + 1;
	}

	_putchar("%");
	_putchar(sp);
	return(2);
}
