#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    double mypow;
    mypow = 1;
    scanf("%d", &n);
	/*---------*/
	for (i = 0; i != n + 1; ++i)
	{
		printf("pow(3,%d) = %d\n", i, (int)pow(3,i));
	}
}