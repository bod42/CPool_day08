/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <stdlib.h>

void	my_putstr(char *);
int	my_strlen(char *str);
char	*my_strcat(char *dest, char const *src);

char	*concat_params(int argc, char **argv)
{
	int i = 0;
	int y = 0;
	int len = 0;
	char *str;

	while (i <  argc) {
		len = my_strlen(argv[i]);
		i++;
	}
	i = 0;
	str = malloc(sizeof(char ) * len);
	if (str != NULL)
		while (i <  argc && argv[i][0] != '\0') {
			my_strcat(str, argv[i]);
			if (argc - 1 == i)
				return (str);
			my_strcat(str, "\n");
			i++;
		}
	return (str);
}

int main(int ac ,char **av){
	my_putstr(concat_params(ac, av));
	return(EXIT_SUCCESS);
}
