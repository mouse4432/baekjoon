#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char word[1000000];
	int cnt = 0;

	gets(word);
	char *a = strtok(word, " ");
	while (a != NULL) {
		cnt++;
		a = strtok(NULL, " ");
	}
	printf("%d", cnt);

	return 0;
}