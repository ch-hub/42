int	check(char* base)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
void	ft_putnbr(int nbr, char* base, int size)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / size, base, size);
		write(1, &(base[-(nbr % size)], 1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr, base, size);
	}
	if (nbr > size - 1)
		ft_putnbr(nbr / size, base, size);
	write(1, &base[nbr % size], 1);
}

void	ft_putnbr_base(int nbr, char* base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (check(base))
		ft_putnbr(nbr, base, size);
}