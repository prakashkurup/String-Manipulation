/*
 * =====================================================================================
 *
 *       Filename:  strstr.c
 *
 *    Description:  strstr implementation.
 *
 *        Version:  1.0
 *        Created:  11/23/2016 09:44:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prakash Kurup (), prakashkurup7@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

char *Strstr(char *substr, char *str)
{
	while (*str) {
		char *Begin = str;
		char *Pattern = substr;

		while (*str == *Pattern && *str && *Pattern) {
			str++;
			Pattern++;
		}

		if (!*Pattern) {
			return Begin;
		}

		str = Begin  + 1;
	}

	return 0;
}

int main(void)
{
	char *str = "Been writing a lot of code so please give me a job";
	char *substr = "please";

	printf("%s\n", Strstr(substr, str));

	return 0;
}
