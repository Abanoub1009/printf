#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: the number of digits printed
 */
int print_number(int n)
{
	int digits = 0;

	if (n / 10)
		digits += print_number(n / 10);

	_putchar((n % 10) + '0');
	digits++;

	return (digits);
}
