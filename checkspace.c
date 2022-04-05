/**
 *
 *
 *
 */
int checkspace(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
			return (1);
	}
	return (0);
}
