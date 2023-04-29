#include "main.h"
/**
 * get_width - gets the width fromn the format string
 * @s: the format string
 * @params: the parameters strcut
 * @ap: argument poiter
 * Return: new pointer
 */
char *get_width(char *s, params_t *params, va_list ap)
{
	int d = 0;

	if (*s == '*')
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (_isdigit(*s))
			d = d * 10 + (*s++ - '0');
	}
	params->width = d;
	return (s);
}
