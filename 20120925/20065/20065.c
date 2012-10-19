#include <stdio.h>
int main(void)
{
    int i,n;
    int repeat, ri;
    double sum;
    double fact(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
        sum = 0;
        for (i = 0; i <= n; ++i)
        	sum += fact(i);
        printf("sum = %.0f\n", sum);
    }
}

double fact(int n)
{
	int i ;
	double sum = 1;
	for (i = 1; i <= n; ++i)
		sum *= i;
	return sum;
}