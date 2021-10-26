#include <unistd.h>

#include "ft_stock_str.h"

void	ft_put_char(char c)
{
	write(1, &c, 1);
}
void	ft_put_str(char* str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_num(int	num)
{
	if (num == -2147483648)
	{
		ft_put_char('-');
		ft_put_char('2');
		ft_put_num(147483648);
	}
	else if (num < 0)
	{
		ft_put_char('-');
		ft_put_num(num * -1);
	}
	if (num > 9)
		ft_put_num(num / 10);
	ft_put_char(num % 10 + 48);
}

void				ft_show_tab(struct s_stock_str* par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_put_str(par[index].str);
		ft_put_str("\n");
		ft_put_num(par[index].size);
		ft_put_str("\n");
		ft_put_str(par[index].copy);
		ft_put_str("\n");
		index++;
	}
}