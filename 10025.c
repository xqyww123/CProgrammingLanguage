#include <stdio.h>
#include <string.h>
char *str_cat(char *s,char *t);
void main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	printf("%s%s\n", s, t);
}
