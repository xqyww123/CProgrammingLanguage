#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Nmax 10000
int a[Nmax];

int com(const void* a, const void *b)
{
	return *((int*)a) - *((int*)b);
}
void main()
{
	int n = 0;
	for (;1;++n)
	{
		scanf("%d", a+n);
		if (a[n] == -1) break;
	}
	for (;1;++n)
	{
		scanf("%d", a+n);
		if (a[n] == -1) break;
	}
	qsort(a, n, sizeof(int), com);
	int i=0;
	for (;i<n;++i) { printf("%d ", a[i]); }
	return;
}/*---------*/

