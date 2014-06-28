#include "stdio.h"
int main(void)
{
    int i, j, n, sum;
    int repeat, ri;
    int a[6][6];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
	sum = 0;
	for (i=0;i<n;++i) for (j=0;j<n;++j)
		if (i+j != n-1 && i!=n-1 && j!=n-1) sum += a[i][j];
/*---------*/
        printf("sum = %d\n", sum);
    }
}
