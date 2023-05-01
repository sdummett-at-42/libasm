#include "unit_tests.h"

int	ft_strdup_test() {
	int result = 1;

	{
		char *str = "Hello World!";
		char *str2 = ft_strdup(str);
		if (strcmp(str, str2) != 0)
			result = 0;
		free(str2);
	}
	{
		char *str = "";
		char *str2 = ft_strdup(str);
		if (strcmp(str, str2) != 0)
			result = 0;
		free(str2);
	}
	{
		char *str = "Hello World! This is a test string. I hope it works. A long string to test the function. Because I like long strings. I hope you do too :) Good luck! I hope you have a nice day! Goodbye! :)";
		char *str2 = strdup(str);
		if (strcmp(str, str2) != 0)
			result = 0;
		free(str2);
	}
	return result;
}