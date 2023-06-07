/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Description:
 *   This function calculates and returns the value of x raised to the power of y
 *   using recursion. If the exponent y is lower than 0, the function returns -1
 *   to indicate an error.
 *
 * Return: The value of x raised to the power of y, or -1 if an error occurs.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);

    if (y == 0)
        return (1);

    return (x * _pow_recursion(x, y - 1));
}

