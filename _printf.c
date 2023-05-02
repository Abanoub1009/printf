#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				putchar(c);
				chars_printed++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				fputs(s, stdout);
				chars_printed += strlen(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				printf("%d", num);
				chars_printed += num_digits(num);
			}
			else if (*format == '%')
			{
				putchar('%');
				chars_printed++;
			}
		}
		else
		{
			putchar(*format);
			chars_printed++;
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}

/**
 * num_digits - calculates the number of digits in an integer
 * @num: the integer to check
 *
 * Return: the number of digits in the integer
 */
int num_digits(int num)
{
	int count = 0;

	if (num == 0)
	{
		return (1);
	}
	else if (num < 0)
	{
		count++;
		num = -num;
	}

	while (num > 0)
	{
		count++;
		num /= 10;
	}

	return (count);
}
