#include "main.h"

/**
 * _putchar - writes c to stdout
 * @c: The character to print
 *
 * Return: 1.
 * or On error, -1 is returned,.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
