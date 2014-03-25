#include "stdio.h"
int main(void)
{
    int i, j, n;
    int repeat, ri; 
	
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
		for (i = 1; i <= n; ++i)
		{
			for (j = n - i; j > 0; --j)
				printf("  ");
			for (j = 1; j <= i * 2 - 1; ++ j)
				printf("* ");
			printf("\n");
		}
		for (i = 1; i != n; ++i)
		{
			for (j = 0; j != i; ++j)
				printf("  ");
			for (j = 1; j <= (n - i) * 2 - 1; ++j)
				printf("* ");
			printf("\n");
		}
    }
    return 0;
}