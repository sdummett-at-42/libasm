#include "unit_tests.h"

int	ft_strcpy_test() {
	int result = 1;

	{
		char *check = ft_strcpy(NULL, NULL);
		if (check != NULL)
			result = 0;
	}
	{
		char *check = ft_strcpy(NULL, "Source");
		if (check != NULL)
			result = 0;
	}
	{
		char dest[256] = {0};
		char * check = ft_strcpy(dest, NULL);
		if (check != dest)
			result = 0;
	}
	{
		char dest[256] = {0};
		char * check = ft_strcpy(dest, "");
		if (check != dest || strcmp(dest, "") != 0)
			result = 0;
	}
	{
		char dest[256] = {0};
		char * check = ft_strcpy(dest, "Source string");
		if (check != dest || strcmp(dest, "Source string") != 0)
			result = 0;
	}
	{
		char *str = "This is a super long string that I'm using to test the ft_strlen function. I hope it works! The string is now even longer. I hope it still works! Waouw! It's still working! I'm in shock! I'm going to stop now. Bye!";
		char dest[1024] = {0};
		char * check = ft_strcpy(dest, str);
		if (check != dest || strcmp(dest, str) != 0)
			result = 0;
	}
	return result;
}