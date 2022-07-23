#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//숫자의 개수

int main()
{
	int A = 0,B=0,C=0,cal=0;
	int che[10] = { 0 };
	scanf("%d %d %d", &A,&B,&C);
	cal = A * B * C;
	while(cal!=NULL)
	{
		che[cal % 10]++;
		cal /= 10;
	}

	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", che[i]);
	}
	return 0;
}
