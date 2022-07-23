#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//나머지
int main()
{
	int a[10], i = 0,res=0,input;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);
		a[i]%= 42;
	}
	for (i = 0;i < 10;i++)
	{
		int cnt=0;
		for (int j = i + 1;j < 10;j++)
		{
			if (a[i] == a[j])cnt++;
		}
		if(cnt==0) res++;
	}
	printf("%d", res);
	return 0;
}
