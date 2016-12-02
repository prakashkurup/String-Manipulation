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

/* Function to implement *strstr */
char *Strstr(char *str, char *substr)
{
	while (*str) {
		char *start = str;
		char *pattern = substr;

		/* if pattern is found */
		while (*str == *pattern && *str && *pattern) {
			str++;
			pattern++;
		}

		/* If pattern matches */
		if (!*pattern) {
			/* return first occurance */
			return start;
		}

		str = start + 1;
	}

	return NULL;
}

int main(void)
{
	char *str = "WUBBA LUBBA DUB DUBS!!!";
	char *substr = "DUB";

	printf("Result: %s\n", Strstr(str, substr));

	return 0;
}
