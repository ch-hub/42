int	ft_atoi(const char* str)
{
	int	negative;
	int	result;

	negative = 1;
	result = 0;
	while (*str &&(*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	while (*str && (*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		negative *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * negative);
}
