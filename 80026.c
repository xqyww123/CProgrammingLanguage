#include<stdio.h>
#include <string.h>
void main()
{
    char s[80];
    char *p;
    int blank, digit, lower, other, upper;

    gets(s);
    upper = lower = blank = digit = other = 0;
	int len = strlen(s), i;
	for ( i=0;i<len;++i)
	{
		if (s[i] <= 'z' && s[i] >= 'a') lower ++;
		else if (s[i] <= 'Z' && s[i] >= 'A') upper ++;
		else if (s[i] == ' ') blank ++;
		else if (s[i] <= '9' && s[i] >= '0') digit++;
		else other ++;
	}
	printf("upper: %d lower: %d blank: %d digit: %d other: %d\n", upper, lower, blank, digit, other);
}
