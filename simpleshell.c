#include "main.h"
/**
 * main - main function of hsh
 *
 * Return: 0 or status execve
 */
int main(void)
{
	char *buffer = NULL;
	size_t size = 0;
	ssize_t bytes = 0;
	int space = 0, status = 0, exitstatus = 0, slash = 0;
	list_t *directorys = NULL, *pwd = NULL, *old_pwd = NULL, *input = NULL;

	signal(SIGINT, function_signal);
	while (EOF)
	{
		if (isatty(STDIN_FILENO) == 1)
			dprintf(1, "MY-SHELL: ");
		do { bytes = getline(&buffer, &size, stdin);
		} while (buffer[0] == '\n' && bytes > 1);
		if (bytes == -1)
		{
			if (isatty(STDIN_FILENO) == 1)
				dprintf(1, "\n");
			break; }
		exitstatus = suprandbuild(buffer);
		if (exitstatus == 1)
		{
			freeall(buffer, old_pwd, pwd, directorys);
			return (status); }
		space = checkspace(buffer);
		if (space != 0)
		{
			tokenizador(buffer, &input, " ");
			slash = checkslash(input->s);
			if (strcmp(input->s, "env") == 0)
				funenvaux();
			else if (slash == 1)
				status = check_directory(input);
			else
			{
				dirs(&directorys, &pwd, &old_pwd);
				if (directorys)
					status = check_files(directorys, input); }
			free_nodes(input);
			input = NULL; }}
	freeall(buffer, old_pwd, pwd, directorys);
	return (status); }
