#include "unit_tests.h"

int ft_strcmp_test()
{
	int result = 1;
	{
		char *str1 = "Hello, world!";
		char *str2 = "Hello, world!";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "";
		char *str2 = "";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, world!";
		char *str2 = "Hello, ";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, world!a";
		char *str2 = "Hello, world! ";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, world!";
		char *str2 = "Hello, world";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, world!";
		char *str2 = "Hello, world!!";
		// char * str1 = "a";
		// char * str2 = "aAa";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, ";
		char *str2 = "Hello, world!!";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "hello, world!";
		char *str2 = "Hello, world!!";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "Hello, world!";
		char *str2 = "hello, world!!";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "aa";
		char *str2 = "aaa";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "aaa";
		char *str2 = "aa";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "aa";
		char *str2 = "aaaa";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "cc";
		char *str2 = "cC";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	{
		char *str1 = "cC";
		char *str2 = "cc";
		int ret_sys = strcmp(str1, str2);
		int ret_ft = ft_strcmp(str1, str2);
		if (ret_sys != ret_ft)
			result = 0;
	}
	return result;
}