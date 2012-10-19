#include <stdio.h>
int main(void)
{
    int flag, i, n, t;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
        sum = 0;
		for (i = 0; i != n; ++i)
		{
			item =  (double)1 / (i * 3 + 1);
			sum += i % 2 == 0 ? item : -item;
		}
      	printf("sum = %.3f\n", sum);
    }
}