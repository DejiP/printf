#include "main.h"

/**
 * printf_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int var = 0;
	int *array;
	int counter = 0;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (; var < counter; var++)
	{
		array[var] = temp % 16;
		temp /= 16;
	}
	for (var = counter - 1; var >= 0;)
	{
		if (array[var] > 9)
			array[var] = array[var] + 7;
		_putchar(array[var] + '0');
		var--
	}
	free(array);
	return (counter);
}
