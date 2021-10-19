unsigned int	ft_strlen(char* dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char* dest, char* src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size < dlen + 1)
	{
		return (size + slen);
	}
	if (size > dlen + 1)
	{
		while (src[i] && dlen + 1 + i < size)
		{
			dest[dlen + i] = src[i];
			i++;
		}
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}