#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double denominator, numerator, sum, temp;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
		denominator = 1;
		numerator = 2;
		sum = 0;
		for (i = 1; i <= n; ++i)
		{
			sum += numerator / denominator;
			temp = denominator;
			denominator = numerator;
			numerator += temp;
		}
     	printf("sum = %.2f\n",sum);
   }
}