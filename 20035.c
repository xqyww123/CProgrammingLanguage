
#include <stdio.h>
int main(void)
{
    int flag, i, n, t;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
	sum = 0;
	for (i=0;i<n;++i) sum += (i&1?-1:1)*(1.0/(1 + 3*i));
      	printf("sum = %.3f\n", sum);
    }
}

