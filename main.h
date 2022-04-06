#ifndef SIMPLESHELL
#define SIMPLESHELL
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
extern char **environ;
/**
 * struct list_s - structure for the list
 * @s: parameters
 * @next: node next
 */
typedef struct list_s
{
	char *s;
	struct list_s *next;
} list_t;
void print_list(list_t *head);
char *_strdup(char *str);
void addnode(list_t **head, char *s);
void free_nodes(list_t *head);
char *getpath();
void tokenizador(char *env, list_t **directorys, const char *delim);
char *_concat(list_t *dir, list_t *input);
void command(list_t *head, char *path_concat);
int get_stat(char *path_concat);
int checkspace(char *s);
void function_signal(int sig);
#endif
