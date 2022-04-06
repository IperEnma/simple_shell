#include "main.h"
/**
 *
 *
 *
 */
int main()
{
	char *env = NULL, *buffer = NULL;
	size_t size = 0;
	ssize_t bytes = 0;
	int space = 0, status = 0, exitstatus = 0;
	list_t *directorys = NULL, *input = NULL;

	env = getpath(); /*obtenemos path de la variable environ*/
	tokenizador(env, &directorys, ":"); /*tokenizamos y enviamos a una lista los directorios*/
	signal(SIGINT, function_signal);	
	while(1)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("MY-SHELL: ");
		bytes = getline(&buffer, &size, stdin);
		exitstatus = funexit(buffer);
		if (exitstatus == 1)
			exit(EXIT_SUCCESS);
		if (bytes == -1)
		{
			printf("\n");
			break;
		}
		buffer[strlen(buffer) - 1] = '\0';
		space = checkspace(buffer);
		if (buffer[0] != '\n' && space != 0)
		{
			tokenizador(buffer, &input, " ");
			if (input->s[0] == '/')
			{
				status = check_directory(input);
			}
			else
			{
				status = check_files(directorys, input);
			}
			free_nodes(input);
			input = NULL;
		}
		if (isatty(STDIN_FILENO) != 1)
			break;
	}
	free(buffer);
	free_nodes(directorys);
	return (status);
}
