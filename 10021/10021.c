#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp (const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}
int main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;

    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));
        strcpy(color[n], str);
        n++;
        scanf("%s", str);
    }
    qsort(color, n, sizeof(char *), cmp);
    for(i = 0; i < n; i++)
        printf("%s  ", color[i]);
    printf("\n");
}