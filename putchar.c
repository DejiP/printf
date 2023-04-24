#include "main.h"
/**
 * _putchar - puts a char
 * @a : a char to put
 *Return: void
 */

void _putchar(int a)
{
int *ptr = &a;
write(1, ptr, sizeof(char));
}
