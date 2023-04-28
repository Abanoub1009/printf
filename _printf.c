#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - custom implementation of printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list  args;
	int count = 1;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': putchar(va_arg(args, int)); break;
				case 's': printf("%s", va_arg(args, char*)); break;
				case '%': putchar('%'); break;
				default:
					putchar('%');
					putchar(*format);
					break;
			}
		}
		else
			putchar(*format);
		format++;
	}
	va_end(args);
	return(count);
}
