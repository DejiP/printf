#include "main.h"
/**
 *_puts - puts a string
 * @str : string to be put
 * Return: void
 */

void _puts(char *str)
{
write(1, str, strlen(str));
}
