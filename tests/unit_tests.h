#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

# define BUFFER_SIZE 1024

int	ft_strlen_test();
int	ft_strcpy_test();
int	ft_strcmp_test();
int	ft_write_test();
int	ft_read_test();
int	ft_strdup_test();

/* Colors
*/
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define MAGENTA	"\033[0;35m"
# define RESET		"\033[0m"

#endif