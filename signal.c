#include "main.h"
/**
 *
 *
 *
 */
void function_signal(int sig)
{
	if (SIGINT == sig)
	{
		dprintf(STDIN_FILENO, "\nMY-SHELL: ");
	}
}
