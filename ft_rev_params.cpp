#include <unistd.h>

int     main(int argc, char** argv)
{
	int     i;
	int     j;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[argc - i][j])
			{
				write(1, &argv[argc - i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
