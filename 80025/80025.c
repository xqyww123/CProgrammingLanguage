#include <stdio.h>
#include <string.h>
void main()
{
    char s[80];
    int repeat, ri;
    int mirror(char *p);
 
    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(s);
        if(mirror(s) != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int mirror(char *p)
{
    int n;
    int i;
    n = strlen(p);
    for (i = 0; i != n; ++i)
    {
        if (p[i] != p[n - i - 1])
            return 0;
    }
    return 1;
}
/*---------*/