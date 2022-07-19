#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main(void){
    char str[MAX];

    gets(str);

    char* token;
    token = strtok(str, " ");

    int cnt = 0;

    while(token)
    {
        cnt++;
        token = strtok(NULL, " ");
    }

    printf("%d", cnt);

    return 0;
}
