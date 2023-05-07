#ifndef LIBASM_H
#define LIBASM_H

#include <sys/types.h>
#include <errno.h>
#include <stdlib.h>

size_t	ft_strlen(char *);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_write(int fd, const void *buf, size_t count);
size_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);

#endif