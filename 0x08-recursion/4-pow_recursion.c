/**
 * _pow_recursion - calcs the pow of number rased to y
 * @x: number
 * @y: power
 *
 * Return: number x raised to power y
*/
int _pow_recursion(int x, int y) /* 4^5 */
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
