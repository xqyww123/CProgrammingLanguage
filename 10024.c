#include <stdio.h>
#include <string.h>
int max_len(char *s[],int n);
int max(int a, int b) { return (a>b)?a:b; }
void main()
{
	int i,n;
	char s[10][80],*p[10];

	scanf("%d",&n);
	for (i=0;i<n;++i)
		scanf("%s", s[i]);
	int re = 0;
	for (i=0;i<n;++i) re = max(re, strlen(s[i]));
	printf("length=%d\n",re);
}
