#include "unit_tests.h"

int ft_strlen_test()
{
	int result = 1;

	// if (ft_strlen(NULL) != strlen(NULL)) // Segfault
	// 	result = 0;
	if (ft_strlen("Hello fworld!") != strlen("Hello fworld!"))
		result = 0;
	if (ft_strlen("This is a damn test =)") != strlen("This is a damn test =)"))
		result = 0;
	if (ft_strlen("") != strlen(""))
		result = 0;
	char *str = "This is a super long string that I'm using to test the ft_strlen function. I hope it works! The string is now even longer. I hope it still works! Waouw! It's still working! I'm in shock! I'm going to stop now. Bye!";
	if (ft_strlen(str) != strlen(str))
		result = 0;
	return result;
}