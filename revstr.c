#include "main.h"

/**
 * printf_srev - reverses a string
 * @ap: args
 *
 * Return: the string
 */
int printf_srev(va_list ap)
{
char *str = va_arg(ap, char*);
int i;
int j = 0;
if (str == NULL)
str = "(null)";
while (str[j] != '\0')
j++;
for (i = j - 1; i >= 0; i--)
_putchar(str[i]);
return (j);
}
