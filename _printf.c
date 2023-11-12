#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: a character strings
 *
 * Return: The number of characters that were printed
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;

	while (*format != '\0')
	{
		if ((*format) == '%')
			count =+ /*TODO add hadlers for the "%"*/;
		else
			/*rturn amount of bytes*/
			count =+ write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
