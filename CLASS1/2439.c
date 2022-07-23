#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//별 찍기 2
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		for (int j = 1;j < n-i;j++)
		{
			printf(" ");
		}
		for (int j = 0;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
