#include "unit_tests.h"

int ft_read_test()
{
	int result = 1;
	{
		char *str = "Hello, world!";
		int len = strlen(str);

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int ret_sys = read(-1, buf_sys, strlen(str));
		int errno_sys = errno;

		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int ret_ft = ft_read(-1, buf_ft, strlen(str));
		int errno_ft = errno;
		if (ret_sys != ret_ft || errno_sys != errno_ft)
			result = 0;
	}
	{
		char *str = "Some super long string that should be truncated\n, but not too much\n, just enough to make it fit in the buffer\n, haha this is too long\n";
		int len = strlen(str);

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		int len = 42;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = NULL;
		int len = 0;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = NULL;
		int len = 1;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		int len = 0;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		int len = 1;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		int len = 2;

		int fd_sys = open("tests/test_sys.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = open("tests/test_ft.txt", O_CREAT | O_TRUNC | O_WRONLY, 0644);
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	{
		char *str = "Hello, World!\n";
		int len = strlen(str);

		int fd_sys = 420;
		write(fd_sys, str, len);
		close(fd_sys);

		fd_sys = open("tests/test_sys.txt", O_RDONLY);
		char buf_sys[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_sys = read(fd_sys, buf_sys, len);
		int errno_sys = errno;
		unlink("tests/test_sys.txt");
		close(fd_sys);

		// ---- // ---- // ---- // ---- // ---- //

		int fd_ft = 420;
		write(fd_ft, str, len);
		close(fd_ft);

		fd_ft = open("tests/test_ft.txt", O_RDONLY);
		char buf_ft[BUFFER_SIZE] = {0};
		errno = 0;
		int bytes_ft = ft_read(fd_ft, buf_ft, len);
		int errno_ft = errno;
		unlink("tests/test_ft.txt");
		close(fd_ft);

		if (bytes_sys != bytes_ft || errno_sys != errno_ft || strcmp(buf_sys, buf_ft) != 0)
			result = 0;
	}
	return result;
}