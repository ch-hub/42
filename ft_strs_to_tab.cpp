#include <stdlib.h>
int	ft_str_length(char* src);
char* ft_strdup(char* src);

struct s_stock_str* ft_strs_to_tab(int argc, char** argv)
{
	int					index;
	struct s_stock_str* array;

	argc = argc + 0;
	if (!(array = malloc((argc + 1) * sizeof(struct s_stock_str))))
		return (0);
	index = 0;
	while (index < argc)
	{
		array[index].size = ft_str_length(argv[index]);
		array[index].str = argv[index];
		array[index].copy = ft_strdup(argv[index]);
		index++;
	}
	array[index] = (struct s_stock_str){ 0, 0, 0 };
	return (array);
}
