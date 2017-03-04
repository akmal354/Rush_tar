/*
** modif_chmod.c for modif_cmod in /home/guillaume/Desktop/CODE/clone/Rush_tar/src
** 
** Made by 
** Login   <morin_n@epitech.net>
** 
** Started on  Sat Mar  4 16:21:57 2017 
** Last update Sat Mar  4 18:08:17 2017 
*/

#include <stdio.h>
#include <sys/stat.h>
#include <unarchiv.h>
#include <stdlib.h>
#include <string.h>
#include "unarchiv.h"

char	*stradd(char *from, char *to, int a)
{
  int	i;

  i = 0;
  if (a < 0)
    while (from[i] != '\0')
      {
	to[i] = from[i];
	i++;
      }
  else
    while (from[i] != '\0')
      {
	to[a] = from[i];
	i++;
	a++;
      }
  return (to);
}

int	modif_chmod(t_header header)
{
  char	*path;
  int	uid;
  int	gid;

  if ((path = malloc(sizeof(char) * 2 + strlen(header.name) + 1)) == NULL)
    return (-1);
  stradd("./", path, 0);
  stradd(header.name, path, atoi(header.size));
  uid = strtol(header.uid, 0, 8);
  gid = strtol(header.gid, 0, 8);
  if ((chmod(path, uid | gid)) != 0)
    return (-1);
  return (0);
}
