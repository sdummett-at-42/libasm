#include <stdio.h>
#include "libasm.h"

int main() {
	/* [ ft_strlen tests ]*/
	printf("\nft_strlen(\"Hello fworld!\") : %ld\n", ft_strlen("Hello fworld!"));
	printf("ft_strlen(NULL) : %ld\n", ft_strlen(NULL));
	printf("ft_strlen(\"This is a damn test =)\") : %ld\n", ft_strlen("This is a damn test =)"));
	printf("ft_strlen(\"\") : %ld\n\n", ft_strlen(""));

	/* [ ft_strcpy tests ] */

	return 0;
} 