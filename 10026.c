

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
	int a=0, i=0;
	for (;str[i];++i)
	{
		if (!a && str[i]==c_begin) a=1;
		if (a) putchar(str[i]);
		if (a && str[i]==c_end) break;
	}
	putchar('\n');
}
/*---------*/
