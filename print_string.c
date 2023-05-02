#include "main.h"
/**
 * print_string - prints a string to standard output
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
