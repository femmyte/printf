#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to format
 * @format: variable
 * Return: the number of characters printed (excluding the null byte used to en\
d output to strings)
 */

int _printf(const char *format, ...)
{
        int j, sum = 0 ;
        va_list ap;
	char *p;
	int ival;

        va_start(ap, format);

        for(j = 0; format[j] != '\0'; j++)
        {
                if(*format != '%')
                {
                        continue;
                }
                switch (*p++)
                {
                case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
                        break;
		case 'i':
			ival = va_arg(ap, int);
			printf("%i", ival);
			break;
                }
        }
        va_end(ap);
        return (sum);
}
