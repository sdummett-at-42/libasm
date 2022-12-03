#include <stdio.h>
#include "libasm.h"

int main() {
	/* [ ft_strlen tests ] */
	printf("\n>>> [ ft_strlen tests ] <<<\n"); 
	printf("ft_strlen(\"Hello fworld!\") : %ld\n", ft_strlen("Hello fworld!"));
	printf("ft_strlen(NULL) : %ld\n", ft_strlen(NULL));
	printf("ft_strlen(\"This is a damn test =)\") : %ld\n", ft_strlen("This is a damn test =)"));
	printf("ft_strlen(\"\") : %ld\n", ft_strlen(""));

	/* [ ft_strcpy tests ] */
	printf("\n>>> [ ft_strcpy tests ] <<<");
	char dest[256];
	void *ret;

	printf("\nAdress of dest   : %p\n", dest);

	ret = ft_strcpy(dest, "Source string");
	printf("Address returned : %p, dest : %s\n", ret, ret);
	
	ret = ft_strcpy(dest, NULL);
	printf("Address returned : %p, dest : %s\n", ret, ret);
	
	ret = ft_strcpy(NULL, "Source");
	printf("Address returned : %p, dest : %s\n", ret, ret);
	
	ret = ft_strcpy(dest, "Another source string");
	printf("Address returned : %p, dest : %s\n", ret, ret);
	
	return 0;
} 