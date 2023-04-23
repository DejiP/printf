#include "main.h"

/**
 * _printf - prints all argumants passed
 * @format : my format specifier lsit
 * Return: 0
 */

int _printf(const char *format, ...)
{
int size = _strlen(format);
int i, j = 0;
va_list ap;
char *store;
va_start(ap, format);
for (i = 0; i < size; i++)
{
if (format[i] == '%')
{
switch (format[i + 1])
{
case 'c':
_putchar(va_arg(ap, int));
i++;
j++;
break;
case 's':
store = va_arg(ap, char *);
_puts(store);
i++;
j += _strlen(store);
break;
case '%':
_putchar('%');
i++;
j++;
}
}
else
{
_putchar(format[i]);
j++;
}

}
return (j);
}
