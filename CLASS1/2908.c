#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//상수

int main()
{
	int A, B;
	int A1=0, B1=0,cal=100;
	scanf("%d %d", &A, &B);
	for (int i = 0;i < 3;i++)
	{
		A1+=  A % 10 * cal;
		B1 += B % 10 * cal;
		A /= 10;
		B /= 10;
		cal /= 10;
	}
	if (A1 > B1) printf("%d", A1);
	else printf("%d", B1);
	return 0;
}
