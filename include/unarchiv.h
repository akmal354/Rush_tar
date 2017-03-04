/*
** unarchiv.h for unarchiv in /home/guillaume/Desktop/CODE/EXAM/rush/tar
** 
** Made by 
** Login   <morin_n@epitech.net>
** 
** Started on  Sat Mar  4 11:13:11 2017 
** Last update Sat Mar  4 17:02:42 2017 
*/

#ifndef UNARCHIV_H_
#define UNARCHIV_H_

// STUCT

/* HEADER SIZE 500 */

typedef struct s_header
{
  char	name[100];
  char	mode[8];
  char	uid[8];
  char	gid[8];
  char	size[12];
  char	mtime[12];
  char	chksum[8];
  char	typeflag;
  char	linkname[100];
  char	magic[6];
  char	version[2];
  char	uname[32];
  char	gname[32];
  char	devmajor[8];
  char	devminor[8];
  char	prefic[155];
}		t_header;

// DEFINE

// FUNCTION

int	main(int ac, char **av);
int	unarchiv(FILE *file);
FILE    *write_in_file(FILE *file, char *str, int size);
int	prep(const char *arg);
char	*stradd(char *from, char *to, int a);
int     modif_chmod(t_header header);

#endif /* !UNARCHIV_H */
