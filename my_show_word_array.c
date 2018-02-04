/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <stdio.h>

void	my_putchar(char c);
int	my_show_word_array(char * const *tab)
{
  int i = 0;
  int j;

  while (tab[i] != NULL) {
	  j = 0;
	  while (tab[i][j] != '\0') {
		  my_putchar(tab[i][j]);
		  j++;
	  }
	  my_putchar('\n');
	  i++;
  }
  return (0);
}
