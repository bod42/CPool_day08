/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <stdlib.h>

int	my_strlen(char const *str);

char	**my_str_to_word_array(char const *str)
{
	char **arr;
	int idx_str;
	int x;
	int y;
	int len;

	if ((len = my_strlen(str)) == -1)
		return (NULL);
	idx_str = 0;
	y = 0;
	if ((arr = malloc(sizeof(char *) * len)) == NULL)
		return (NULL);
	while (str[idx_str] != 0) {
		if ((arr[y] = malloc(sizeof(char) * len)) == NULL)
			return (NULL);
		while ((str[idx_str] != 0)
		       && (str[idx_str] == ' ' || str[idx_str] == '\t'))
			idx_str += 1;
		x = 0;
		while (str[idx_str] != 0
		       && str[idx_str] != ' ' && str[idx_str] != '\t')
			arr[y][x++] = str[idx_str++];
		arr[y++][x] = 0;
		while ((str[idx_str] != 0)
		       && (str[idx_str] == ' ' || str[idx_str] == '\t'))
			idx_str += 1;
	}
	arr[y] = NULL;
	return (arr);
}
