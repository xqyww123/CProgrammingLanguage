#include "stdio.h"
#define g(x) (x % 10)
#define s(x) (x % 100 / 10)
#define b(x) (x / 100)
int main(void)
{
    int i, digit, m, n, number, sum;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
		/*---------*/
		for (i = m; i <= n; ++i)
		{
			if (n == 1000) n = 999;
			if (g(i) * g(i) * g(i) + s(i) * s(i) * s(i) + b(i) * b(i) * b(i) == i)
				printf("%d\n", i);
		}
    }
    return 0;
}