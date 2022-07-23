#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//시험 성적

int main()
{
	int sco = 0;
	scanf("%d", &sco);
	if (sco >= 90) printf("A");
	else if (sco >= 80) printf("B");
	else if (sco >= 70) printf("C");
	else if (sco >= 60) printf("D");
	else printf("F");

	return 0;
}
