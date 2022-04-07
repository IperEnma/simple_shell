#include "main.h"
/**
 *
 *
 *
 */
int main()
{
	char *buffer = NULL;
	size_t size = 0;
	ssize_t bytes = 0;
	int space = 0, status = 0, exitstatus = 1, slash = 0, i = 0;
	list_t *directorys = NULL, *pwd = NULL, *old_pwd = NULL, *input = NULL;

	dirs(&directorys, &pwd, &old_pwd);
	print_list(old_pwd);
	print_list(pwd);
	print_list(directorys);
	signal(SIGINT, function_signal);	
	while(1)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("MY-SHELL: ");
		bytes = getline(&buffer, &size, stdin);
		if (bytes == -1)
		{
			printf("\n");
			break;
		}
		buffer[strlen(buffer) - 1] = '\0';
		exitstatus = funexit(buffer);
		if (exitstatus == 0)
			exit(EXIT_SUCCESS);
		space = checkspace(buffer);
		slash = checkslash(buffer);
		if (buffer[0] != '\n' && space != 0)
		{
			tokenizador(buffer, &input, " ");
			if (slash == 1)
				status = check_directory(input);
			else
				status = check_files(directorys, input);
			free_nodes(input);
			input = NULL;
		}
		if (isatty(STDIN_FILENO) != 1)
			break;
	}
	free(buffer);
	free_nodes(old_pwd);
	free_nodes(pwd);
	free_nodes(directorys);
	return (status);
}
