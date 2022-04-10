#include "main.h"
/**
 * function_signal - catching ctrl+c
 * @sig: signal
 * Return: void
 */
void function_signal(int sig)
{
	if (sig == SIGINT)
	{
		dprintf(STDIN_FILENO, "\nMY-SHELL: ");
	}
}
