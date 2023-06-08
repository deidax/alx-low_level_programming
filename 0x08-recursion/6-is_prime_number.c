/**
 * _check_prime - Recursive helper function to check if a number is prime.
 * @n: The number to be checked.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */
int _check_prime(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (_check_prime(n, divisor + 1));
}
/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to be checked.
 *
 * Description:
 *  This function recursively checks if the integer @n is a prime number.
 *  If @n is a prime number, the function returns 1. Otherwise, it returns 0.
 *
 * Return: 1 if @n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_check_prime(n, 2));
}
