#include "main.h"
/**
 *_puts - puts a string
 * @str : string to be put
 * Return: void
 */

void _puts(char *str)
{
char *null = "(null)";
if (str != NULL)
{
write(1, str, strlen(str));
}
else
{
write(1, null, strlen(null));
}
}
