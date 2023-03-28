#include <main.h>

int print_char(va_list ptr)
{
    _putchar(va_arg(ptr, char));
    return (1);
}
