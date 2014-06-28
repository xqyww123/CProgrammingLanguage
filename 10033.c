#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Nmax 10000
int a[Nmax];

void main()
{
	int n = 0;
	for (;1;++n)
	{
		scanf("%d", a+n);
		if (a[n] == -1) break;
	}
	while (n) printf("%d ", a[--n]);
	return;
}/*---------*/

