#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//구구단
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1;i <= 9;i++) printf("%d * %d = %d\n", n, i, i * n);
	return 0;
}
