#include "main.h"
/**
 * _printf - correcst function to print.
 * @format: identifier
 * Return: the length.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int var = 0;
	int h;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[var] != '\0')
	{
		h = 13;
		while (h >= 0)
		{
			if (m[h].id[0] == format[var] && m[h].id[1] == format[var + 1])
			{
				len += m[h].f(args);
				var = var + 2;
				goto Here;
			}
			h--;
		}
		_putchar(format[var]);
		len++;
		var++;
	}
	va_end(args);
	return (len);
}
