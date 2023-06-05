#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to a char
 * @to: Pointer to a char
 *
 * Description: This function sets the value of the pointer @s to the value
 *              of the pointer @to. It effectively changes the string that @s
 *              points to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

