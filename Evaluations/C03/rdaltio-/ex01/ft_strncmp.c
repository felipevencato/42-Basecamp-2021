int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] || s2[count]) && count < n - 1 && s1[count] == s2[count])
		count++;
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
