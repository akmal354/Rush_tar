/*
** unarchivage.c for unarchive in /home/guillaume/Desktop/CODE/EXAM/rush/tar
** 
** Made by 
** Login   <morin_n@epitech.net>
** 
** Started on  Fri Mar  3 21:22:05 2017 
** Last update Sat Mar  4 18:10:40 2017 
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include "unarchiv.h"

FILE	*write_in_file(FILE *file, char *str, int size)
{
  int	i;
  
  i = 0;
  while (i <= size)
    {
      if (str[i] != '\0')
	fwrite(&str[i], 1, 1, file);
      i++;
    }
  return (file);
}

int		unarchive(FILE *file)
{
  int		size;
  t_header	header;
  char		*str;
  FILE		*fp;
  int		i;

  i = 0;
  while ((i = fread(&header, sizeof(header), 1, file)) != 0)
    {
      fp = fopen(header.name, "w+");
      size = atoi(header.size);
      if ((str = malloc(sizeof(char) * size)) == NULL)
	return (-1);
      write_in_file(fp, str, size);
      modif_chmod(header);
      i += size;
      fseek(file, i, SEEK_CUR);
      free(str);
    }
  //  fclose(fp);
  return (0);
}

int		prep(const char *arg)
{
  FILE	       	*file;
  
  if (arg == NULL)
    return (-1);
  if ((file = fopen(arg, "r")) == NULL)
    return (-1);
  if (unarchive(file) == -1)
    return (-1);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac < 2)
    return (84);
  if (prep(av[1]) != 0)
    return (-1);
  return (0);
}
