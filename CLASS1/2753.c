#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//윤년
int main()
{
	int y = 0;
	scanf("%d", &y);
	if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
