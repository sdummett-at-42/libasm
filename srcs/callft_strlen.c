#include <stdio.h>
#include <inttypes.h>

int64_t ft_strlen(char *);

int main() {
	printf("ft_strlen(\"Hello fworld!\") : %ld\n", ft_strlen("Hello fworld!"));
	printf("ft_strlen(NULL) : %ld\n", ft_strlen(NULL));
	printf("ft_strlen(\"This is a damn test =)\") : %ld\n", ft_strlen("This is a damn test =)"));
	printf("ft_strlen(\"\") : %ld\n", ft_strlen(""));
	return 0;
} 