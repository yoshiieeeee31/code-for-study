void	del_digit(char *str)
{
	char	*s;

	s = str;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			*s++ = *str;
		str++;
	}
	*s = '\0';
}

