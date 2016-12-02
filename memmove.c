/*
 * =====================================================================================
 *
 *       Filename:  memmove.c
 *
 *    Description:  memmove implementation.
 *
 *        Version:  1.0
 *        Created:  11/24/2016 12:01:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prakash Kurup (), prakashkurup7@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <string.h>

void *Memmove(void *dest, void *src, size_t size)
{
	/* If dest is same as src, return */
	if (src == dest)
		return dest;
	
	char *pSrc = (char *)src;
	char *pDest = (char *)dest;

	/* If overlap is detected */
	if (src < dest) {
		/* Move the pointers by size value */
		pSrc += size - 1;
		pDest += size - 1;

		/* Start copying in reverse */
		while (size--) {
			*pDest-- = *pSrc--;
		}

	/* If no overlap */
	} else {
		/* Copy forwards */
		while (size--) {
			*pDest++ = *pSrc++;
		}
	}

	return dest;
}

int main(void)
{
	char src[] = "Meeseeksfor";
	size_t size = strlen(src);

	printf("Original str: %s\n", src);

	Memmove((void *)&src[8], (void *)src, size);

	printf("After memmove: %s\n", src);

	return 0;
}
