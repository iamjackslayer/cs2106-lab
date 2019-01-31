/*
 * Name: Wong Zhing Jieh Jack
 * ID: A0173687M
 * file lab1-readpal.c 
 */
#include <stdio.h>
#include <stdlib.h>
#define BLOCK_SIZE (1028)
// read the input string one char at a time. once the curr length reaches BLOCK_SIZE bytes,
// reallocate memory for the variable holding the input string. The new memory size is one 
// BLOCK_SIZE larger than the old one.
int check_palindrome(char * s);

int read_palindrome() {
	char *p;
	int curr_index= 0;
	int i = 1;
	p = malloc(BLOCK_SIZE);

	while ((p[curr_index] = getchar()) != '\n') {
		curr_index++;
		// printf("%d\n", curr_index);
		if (curr_index == i * BLOCK_SIZE) { // last char
			i++;
			p = realloc(p, i * BLOCK_SIZE);
		}
	}

	p[curr_index] = '\0'; // to replace '\n'.

	return check_palindrome(p);
}

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
