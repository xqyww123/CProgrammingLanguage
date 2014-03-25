#include "stdio.h"
int main(void)
{
    int i, j, n;
    int repeat, ri;
    double e, product;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
		e = 1;
		product = 1;
		for (i = 1; i <= n; ++i)
		{
			product *= i;
			e += 1 / product;
			
		}
    	printf("e = %0.4f\n", e);
  }
  return 0;
}
