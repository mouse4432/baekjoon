#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NUM 1000000
//단어 공부
int main()
{
	char a[NUM],che;
	int b[26] = { 0 };
	int i = 0, max = 0,time;
	scanf("%s", a);
	time = strlen(a);//for문에 strlen함수가 있으면 for문 조건 판단할 때마다 배열 a를 검색해야해서 시간초과 뜸.
	for (i = 0;i <time;i++)
	{
		if (a[i] >= 'a') b[a[i] - 'a']++;
		else b[a[i]-'A']++;
	}
	for (i = 0;i < 26;i++)
	{
		if(max<b[i])
		{
			max = b[i];
			che = i+'A';
		}
		else if (b[i] == max)
		{
			che = '?';
		}
	}
	printf("%c", che);
	return 0;
}
