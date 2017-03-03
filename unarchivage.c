/*
** unarchivage.c for unarchive in /home/guillaume/Desktop/CODE/EXAM/rush/tar
** 
** Made by 
** Login   <morin_n@epitech.net>
** 
** Started on  Fri Mar  3 21:22:05 2017 
** Last update Fri Mar  3 21:28:44 2017 
*/

#include <stdio.h>

int	unarchive(char *file)
{
  if (file == NULL)
    return (-1);
  verif_file(file);
}

int	main(int ac, char **av)
{
  if (ac < 2)
    {
      printf("NO ARGUMENT\n");
      return (84);
    }
  if (unarchive(av[1]) != 0)
    return (-1);
  return (0);
}
