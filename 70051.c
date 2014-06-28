#include <stdio.h>
int main( )
{
    int i, index, n, temp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
/*---------*/
	int mi = 0;
	for (i=0;i<n;++i) if (a[i] >= a[mi]) mi = i;
	printf("max = %d, index = %d\n", a[mi], mi);
	int t = a[mi]; a[mi] = a[n-1]; a[n-1]=t;
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}
