#include "main.h"

/**
 * init_params - Clears struct fields and resets buf
 * @params: Pointer to the parameters struct
 * @ap: The argument pointer
 *
 * This function initializes the fields of the parameters struct pointed to by
 * @params and sets them to their default values. It also resets the buffer used
 * for storing the formatted output.
 */

void init_params(params_t *params. va_list ap)
{
	params->unsign = 0;
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;
	params->width = 0;
	params->precision = UNIT_MAX;
	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
