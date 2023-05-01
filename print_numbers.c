#include "main.h"
/**
 * print_numbers - prints output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int print_numbers(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
					printf("%d", va_arg(args, int));
					printed_chars++;
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					printed_chars++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
