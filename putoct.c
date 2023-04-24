#include "main.h"

/**
 * printf_oct - prints octals.
 * @ap: arg.
 * Return: count
 */
int printf_oct(va_list ap)
{
	int i;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
