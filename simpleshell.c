#include "main.h"
volatile sig_atomic_t stop = 0;
/**
 *
 *
 *
 */
int main()
{
	char *env = NULL, *path_concat = NULL, *buffer = NULL;
	size_t size = 0;
	ssize_t bytes = 0;
	int space = 0, stat = 0;
	list_t *directorys = NULL, *input = NULL;

	env = getpath(); /*obtenemos path de la variable environ*/
	tokenizador(env, &directorys, ":"); /*tokenizamos y enviamos a una lista los directorios*/
	signal(SIGINT, function_signal);	
	while(!stop)
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
		space = checkspace(buffer);
		if (buffer[0] != '\n' && space != 0)
		{
			tokenizador(buffer, &input, " ");
			if (input->s[0] == '/')
			{
				stat = get_stat(input->s);
				if (stat == 0)
				{
					path_concat = input->s;
					command(input, path_concat);
				}
				else
					dprintf(2, "No es un archivo ni un directorio\n");
			}
			else
			{
				path_concat =_concat(directorys, input);
				if (strcmp(path_concat, "ERROR") == 0)
					dprintf(2, "Comando no encontrado\n");
				else
				{
					command(input, path_concat);
					free(path_concat);
				}
			}
			free_nodes(input);
			input = NULL;
		}
		if (isatty(STDIN_FILENO) != 1)
			break;
	}
	free(buffer);
	free_nodes(directorys);
	return (0);
}
