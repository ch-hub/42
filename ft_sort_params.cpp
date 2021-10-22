
#include <unistd.h>

int ft_strcmp(char* s1, char* s2)
{
	int     i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void    ft_swap(char** a, char** b)
{
	char* c;

	c = *a;
	*a = *b;
	*b = c;
}
void    ft_sort(char** a, int size)
{
	int     i;

	i = 1;
	while (i < size)
	{
		if (ft_strcmp(a[i], a[i + 1]) > 0)
		{
			ft_swap(&a[i], &a[i + 1]);
		}
		i++;
	}
}

int     main(int argc, char** argv)
{
	int     i;
	int j;

	i = 1;
	j = 0;
	if (argc > 2)
	{
		ft_sort(argv, argc - 1);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}