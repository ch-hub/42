#include <unistd.h>

void	ft_hex(char hex[])
{
	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'a';
	hex[11] = 'b';
	hex[12] = 'c';
	hex[13] = 'd';
	hex[14] = 'e';
	hex[15] = 'f';
}

void	ft_putstr_non_printable(char* str)
{
	int		i;
	char	a;
	char	b;
	char	hex[16];

	ft_hex(hex);
	i = -1;
	while (str[++i])
		if ((str[i] >= 32 && str[i] <= 126))
			write(1, &str[i], 1);
		else
		{
			a = hex[str[i] / 16];
			b = hex[str[i] % 16];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
}