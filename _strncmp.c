/**
 * _strcmp - compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
