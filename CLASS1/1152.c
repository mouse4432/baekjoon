#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 1000000

int main()
{
	char a[NUM];
	int sum = 0;
	gets(a);

	char *ptr = strtok(a, " ");

	while (ptr != NULL)
	{
		sum++;
		ptr=strtok(NULL, " ");
	}
	printf("%d", sum);

	return 0;
}
