#include "main.h"
/**
 * printf_rot13 - rot str char with the thirteenth one to it
 * @ap: type struct va_arg where is allocated printf arguments
 * Return: count
 *
 */
int printf_rot13(va_list ap)
{
int i, j, count = 0;
int k = 0;
char *str = va_arg(ap, char*);
char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

if (str == NULL)
str = "(null)";
for (i = 0; str[i]; i++)
{
k = 0;
for (j = 0; alpha[j] && !k; j++)
{
if (str[i] == alpha[j])
{
_putchar(rot[j]);
count++;
k = 1;
}
}
if (!k)
{
_putchar(str[i]);
count++;
}
}
return (count);
}
