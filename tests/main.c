#include "unit_tests.h"

int main() {
	printf(MAGENTA "Running libasm tests...\n" RESET);
	if (!ft_strlen_test())
		printf(RED "[ KO ] ft_strlen\n" RESET);
	else
		printf(GREEN "[ OK ] ft_strlen\n" RESET);

	if (!ft_strcpy_test())
		printf(RED "[ KO ] ft_strcpy\n" RESET);
	else
		printf(GREEN "[ OK ] ft_strcpy\n" RESET);

	if (!ft_strcmp_test())
		printf(RED "[ KO ] ft_strcmp\n" RESET);
	else
		printf(GREEN "[ OK ] ft_strcmp\n" RESET);

	if (!ft_write_test())
		printf(RED "[ KO ] ft_write\n" RESET);
	else
		printf(GREEN "[ OK ] ft_write\n" RESET);

	if (!ft_read_test())
		printf(RED "[ KO ] ft_read\n" RESET);
	else
		printf(GREEN "[ OK ] ft_read\n" RESET);

	if (!ft_strdup_test())
		printf(RED "[ KO ] ft_strdup\n" RESET);
	else
		printf(GREEN "[ OK ] ft_strdup\n" RESET);
	return 0;
}