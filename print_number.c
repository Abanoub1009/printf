#include "main.h"
/**
 * print_number - prints a number with options
 * @str: the base number as a string
 * @params: parameters
 * Return: chars printed
 */
int print_number(char *str, params_t *params)
{
	unsigned int i = _strlen(str);
	int neg = (!params->unsign && *str == '0' && !str[1])
		str = "";
	if (neg)
	{
		str++;
		i--;
	}
	if (params->precision != UNIT_MAX)
	{
		while (i++ < params->precision)
			*--str = '0';
	}
	if (neg)
		*--str = '-';
	if (!params->minus_flag)
	{
		return (print_number_right_shift(str, params);
	}
	else
		return (print_number_lift_shift(str, params);
}
