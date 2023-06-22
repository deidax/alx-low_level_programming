#include "3-calc.h"
/**
 * get_op_func - Returns a pointer to a function based on the operator.
 *
 * @s: The operator string.
 *
 * Description:
 *   The get_op_func function takes an operator string @s as input and
 *   returns a pointer to a function that corresponds to the provided
 *   operator. The returned function takes two integer arguments and
 *   returns an integer.
 *
 * Return:
 *   Pointer to a function that performs the operation corresponding to @s.
 */
int (*get_op_func(char *s))(int, int)
{
	char *opt_char = "+-*/%";
	int (*opt_cmd[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	int c = 0;

	while (*opt_char != '\0')
	{
		if (*opt_char == *s)
			return (opt_cmd[c]);
		c++;
		opt_char++;
	}
	return (NULL);
}
