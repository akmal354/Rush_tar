/*
** my_tar.h for tar in /home/bazni/Rush_tar
** 
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.eu>
** 
** Started on  Fri Mar  3 23:07:04 2017 Gwendal Bazin
** Last update Fri Mar  3 23:22:30 2017 Gwendal Bazin
*/

#ifndef MY_TAR_H
# define MY_TAR_H

typedef struct posix_header
{                              /* byte offset */
  char	name[100];               /*   0 */
  char	mode[8];                 /* 100 */
  char	uid[8];                  /* 108 */
  char	gid[8];                  /* 116 */
  char	size[12];                /* 124 */
  char	mtime[12];               /* 136 */
  char	chksum[8];               /* 148 */
  char	typeflag;                /* 156 */
  char	linkname[100];           /* 157 */
  char	magic[6];                /* 257 */
  char	version[2];              /* 263 */
  char	uname[32];               /* 265 */
  char	gname[32];               /* 297 */
  char	devmajor[8];             /* 329 */
  char	devminor[8];             /* 337 */
  char	prefix[155];             /* 345 */
  /* 500 */
}	t_h;

#endif