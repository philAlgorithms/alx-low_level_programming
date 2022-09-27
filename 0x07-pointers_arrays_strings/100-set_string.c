#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the string
 * @to: value the string will be set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
