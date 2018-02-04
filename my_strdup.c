/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <stdlib.h>
#include <stdio.h>

int	my_strlen(char const *str);

char	*my_strdup(char const *src)
{
	char *str = 0;
	int i = 0;

	if (src != NULL) {
		str = malloc(sizeof(char) * my_strlen(src));
		while (src[i] != '\0') {
			str[i] = src[i];
			i++;
		}
	}
	return (str);
}
