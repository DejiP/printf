#include "main.h"

/**
 * segment - sgments the code to reduce lines
 * @store : string to test on
 * Return: ret number of printed character
 */

int segment(char *store)
{
int ret = 0;
if (store == NULL)
{
_puts("(null)");
ret += 6;
}
else
{
_puts(store);
ret += _strlen(store);
}
return (ret);
}

/**
 * _printf - prints all arguments passed
 * @format : format of text
 * Return: length of printed string
 * Description: prints the arguments passed to it
 */
int _printf(const char *format, ...)
{
int size = _strlen(format), j = 0;
int  i;
char *store, storec;
va_list ap;
va_start(ap, format);
for (i = 0; i < size; i++)
{
if (format[i] == '%')
{
switch (format[i + 1])
{
case 'c':
storec = va_arg(ap, int);
_putchar(storec);
j++;
i++;
break;
case 's':
store = va_arg(ap, char *);
j += segment(store);
i++;
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
