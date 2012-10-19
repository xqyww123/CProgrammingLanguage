#include <stdio.h>
int main(void)
{
    int flag, i, n;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
		sum = 0;
		for (i = 0; i != n; ++i)
		{
			item = (double)(i + 1) / (i * 2 + 1);
			sum += i % 2 == 0 ? item : - item;
		}
      	printf("sum = %.3f\n", sum);
    }
}