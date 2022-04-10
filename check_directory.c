#include "main.h"
/**
 * check_directory - check existence of directory
 * @input: received directory by user
 * Return: status
 */
int check_directory(list_t *input)
{
	int stat = 0, file = 0, status = 0;
	char *path_concat = NULL;

	stat = get_stat(input->s);
	if (stat != 0)
		perror("");
	else
	{
		file = regular_file(input->s);
		if (file == 0)
			perror("");
		else
		{
			path_concat = input->s;
			status = command(input, path_concat);
		}
	}
	return (status);
}
