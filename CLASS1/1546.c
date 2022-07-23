#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//평균

int main()
{
	int n = 0;//시험 본 과목 수
	double sco[1000] = { 0 };
	double max=0,sum=0;
	int i;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &sco[i]);
		if (max <= sco[i])
		{
			max = sco[i];
		}
	}
	for (i = 0;i < n;i++)
	{
		sum += (sco[i] / max) * 100;
	}
	printf("%lf", sum / n);
	return 0;
}
