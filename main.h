#ifndef _MAIN_H_
#define _MAIN_H_

struct pr_type
{
	char *fmtp;
	int (*f)(va_list ptr);
};
typedef struct pr_type pr_t;

int _putchar(va_list ptr);
int print_char(va_list ptr);
int print_string(va_list ptr);
int print_percent(va_list ptr);
int print_default(va_list ptr);
int (*get_type_func(char sp))(va_list ptr);
int _printf(const char *format, ...);

#endif
