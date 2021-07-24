#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to format
 * @format: variable
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int j, i = 0, sum = 0;
	va_list ap;
	char *p, *sval;

	va_start(ap, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (*format != '%')
		{
			continue;
		}
		switch (*p++)
		{
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++, i++)
				sum += i;
			break;
		}
	}
	va_end(ap);
	return (sum);
}
