#include "main.h"

/**
 * get_specifier - finds the format func
 * @S: the format string
 * Return: the number of bytes printed
 */
int (*get_specifier(char *S)) (va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_adress},
		{"S", print_s},
		{"r", print_rev},
		{"R" print_rot13},
		{NULL, NULL}
	};
	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*s == specifires[i].specifier[0])
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}
