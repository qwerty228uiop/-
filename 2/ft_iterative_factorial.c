int		ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = 0;
	result = 1;
	while (++i <= nb)
		result *= i;
	return (result);
}
