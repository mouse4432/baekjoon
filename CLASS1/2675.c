#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//문자열 반복

int main()
{
	int r;//반복횟수
	char s[20] = { 0 };//반복할 문자열
	int i = 0,j=0,t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %s", &r, s);
		for (i = 0;i < strlen(s);i++)
		{
			for (j = 0;j < r;j++)
			{
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
