#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *argstostr - It concatenates all aarguments of the programe
 *@ac: number of arguments in the program
 *@av: array of pointers to each argument
 *
 *Return: A pointer to a concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, len, current_position;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
		/*1 for the '\n'*/
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	current_position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + current_position, av[i]);
		current_position += strlen(av[i]);
		str[current_position] = '\n';
		current_position++;
	}
	str[current_position] = '\0';
	return (str);
}
