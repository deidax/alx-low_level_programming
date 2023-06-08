/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number for which the square root is calculated.
 * @i: The current value to check for square root.
 *
 * Return: The natural square root of @n, or -1 if not found.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Description:
 *	This function recursively calculates and returns the natural square root of
 *	the number @n. If @n does not have a natural square root, the function
 *	returns -1 to indicate an error.
 *
 * Return: The natural square root of @n, or -1 if an error occurs.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}

