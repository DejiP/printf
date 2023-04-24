#include "main.h"
/**
 * printf_string - print a string
 * @ap: args
 * Return: length.
 */

int printf_string(va_list ap)
{
char *str;
int i, length;
str = va_arg(ap, char *);
if (str == NULL)
{
str = "(null)";
length = _strlen(str);
for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
else
{
length = _strlen(str);
for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
}
