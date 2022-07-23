#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//음계
int main()
{
	int da[8],che=0,che1=9,i;
	for (i = 0;i < 8;i++)
	{
		scanf("%d", &da[i]);
	}
	if (da[0] == 1)//12345678
	{
		for (i = 0;i < 8;i++)
		{
			che++;
			if (da[i] != che)
			{
				printf("mixed");
				return 0;
			}
		}
		printf("ascending");
	}
	else if (da[0] == 8)
	{
		for (i = 0;i <8;i++)
		{
			che1--;;
			if (da[i] != che1)
			{
				printf("mixed");
				return 0;
			}
		}
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	return 0;
}
