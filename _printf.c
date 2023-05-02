#include "main.h"
/**
 * _printf - prints output according to a format
 * @format: the format string
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
			continue;
		}
		format++;
		if (*format == '\0')
			break;
		switch (*format)
		{
			case 'c':
				printed_chars += _putchar(va_arg(args, int));
				break;
			case 's':
				printed_chars += print_string(va_arg(args, char *));
				break;
			case '%':
				printed_chars += _putchar('%');
				break;
			case 'd':
			case 'i':
				printed_chars += print_number(va_arg(args, int));
				break;
			default:
				printf("% %s", format);
				printed_chars += 2;
				break;
		}
	}
	va_end(args);
	return (printed_chars);
}
