#include "main.h"
/**
 * printf_unsigned - prints unsigned
 * @ap: arg print
 * Return: numbers of char printed
 */
int printf_unsigned(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int num, lastly = n % 10, dig, expo = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (lastly < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lastly = -lastly;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expo = expo * 10;
			num = num / 10;
		}
		num = n;
		while (expo > 0)
		{
			dig = num / expo;
			_putchar(dig + '0');
			num = num - (dig * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(lastly + '0');

	return (i);
}
