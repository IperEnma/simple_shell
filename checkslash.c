/**
 * checkslash - checks if a slash is present
 * @s: received command
 * Return: 0 no slash or 1 slash present
 */
int checkslash(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '/')
			return (1);
	}
	return (0);
}
