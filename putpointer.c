#include "main.h"

/**
 * printf_pointer - prints all hexas
 * @ap: arg
 * Return: count
 */
int printf_pointer(va_list ap)
{
void *point;
char *str = "(nil)";
long int a;
int j;
int i;
point = va_arg(ap, void*);
if (point == NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}

a = (unsigned long int)point;
_putchar('0');
_putchar('x');
j = printf_hex_aux(a);
return (j + 2);
}
