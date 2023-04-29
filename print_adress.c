#include "main.h"
/**
 * print_adress - prints adress
 * @ap: argument pointer
 * @params: the parameters strcut
 * Return: byts printed
 */
int print_adress(va_list ap, params_t *params)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	char *str;

	if (!n)
		return (_puts("(nil)"));
	str = convert(n, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	*--str = 'x';
	*--str = '0';
	return (print_number(str, params));
}
