#include "main.h"
/**
 * convert - conveter function, a clone of itoa
 * @num: number
 * @base: base
 * @flags: flags
 * @params: parameter strcut
 * Return: string
 */
char *convert(long int num, int base, int falgs, params_t *params)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;
	(void)params;

	if (!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		n = -num;
		sign = '-';
	}
	array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" :
		"0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	d {
		*--ptr = array[n % base];
		n /= base;
	}while (n != 0);
	if (sign)
		*--ptr = sign;
	return (ptr);
}
