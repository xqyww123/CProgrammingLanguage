#include <stdio.h>
#include <string.h>
int main(void)
{
    char sx[80][80];
    int i, n;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
	for (i=0;i<n;++i)
        	scanf("%s", sx[i]);
	int mi=0;
	for (i=0;i<n;++i) if (strlen(sx[i]) > strlen(sx[mi])) mi = i;
	printf("The longest is: %s\n", sx[mi]);
    }
/*---------*/
}   
