#include "main.h"

/**
 * printf_hex - prints all hexadecimals.
 * @ap: args.
 * Return: counter.
 */
int printf_hex(va_list ap)
{
int i;
int *arr;
int count = 0;
unsigned int num = va_arg(ap, unsigned int);
unsigned int tmp = num;
while (num / 16 != 0)
{
num /= 16;
count++;
}
count++;
arr = malloc(count *sizeof(int));
for (i = 0; i < count; i++)
{
arr[i] = tmp % 16;
tmp /= 16;
}
for (i = count - 1; i >= 0; i--)
{
if (arr[i] > 9)
arr[i] = arr[i] + 39;
_putchar(arr[i] + '0');
}
free(arr);
return (count);
}
