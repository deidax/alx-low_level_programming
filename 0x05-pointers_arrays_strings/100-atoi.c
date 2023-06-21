/**
 * _atoi - Converts a string to an integer.
 * @s: Input string.
 *
 * Description:
 *	Converts the string @s to an integer. The number in the string can be
 *	preceded by an infinite number of characters, and it takes into account
 *	the negative (-) and positive (+) signs before the number. If there are
 *	no valid numbers in the string, the function returns 0. The function does
 *	not use the 'long' type or hard-coded special values. It does not declare
 *	new variables of type array. The code is compiled using the
 *	-fsanitize=signed-integer-overflow flag.
 *
 * Return:
 *	The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;/* Sign of the number, initialized to positive */
	int result = 0;/* Accumulator for the converted integer */
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		/* Process the digits */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* Multiply the result by 10 and add the current digit */
			result = (result * 10) + (s[i] - '0');
		}
		else if (s[i] >= 'A' && s[i] <= 'Z' && result != 0)
			break;
	}
	return (result * sign);

}

