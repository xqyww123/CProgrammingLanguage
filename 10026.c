#include <stdio.h>
char newstr[80];
void main()
{
	char str[80],c_begin,c_end;
	char *fun(char *p,char c_begin,char c_end);

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	int f = 0;
	int n = strlen(str), i;
	for (i=0;i<n;++i)
	{
		if (!f && str[i] == c_begin) f = 1;
		if (f) putchar(str[i]);
		if (f && str[i] == c_end) break;
	}	
}
