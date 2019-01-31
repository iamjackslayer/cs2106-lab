/*
 * Name: Wong Zhing Jieh Jack
 * ID: A0173687M
 * file lab1-ex4.c 
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN (128)

// extern int check_palindrome(char *s);

// int main() 
// {
// 	char *p;
// 	p = malloc(MAXLEN+1); // p points to a buffer on the heap
// 	scanf("%s", p);
// 	printf("palindrome %s = %d\n", p, check_palindrome(p));
// 	return 0;
// }

int check_palindrome(char *s) {
	char * p = s; // p points to the first char.
	int i; // number of chars of input string.
	for (i = 0; *s != '\0'; s++, i++);
	int j;
	for (j = 0; j < i / 2; j++) {
		if (*(p + j) != *(p + (i - j - 1))) {
			return 0;
		}
	}
	return 1;
}
