#include "main.h"
/**
 * printf_int - prints integer
 * @ap: argument print
 * Return: number printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int);
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

/**
 * printf_dec - prints decimal
 * @ap: argument print
 * Return: number of printed characters
 */

int printf_dec(va_list ap)
{
	int n = va_arg(ap, int);
	int num, lastly = n % 10, dig;
	int  i = 1;
	int expo = 1;

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
