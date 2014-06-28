#include <stdio.h>
int main(void)
{
    int i, index, n;
    int ri, repeat;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
/*---------*/
	int mi = 0;
	for (i=0;i<n;++i) if (a[i] > a[mi]) mi = i;
	index = mi;
        printf("max = %d, index = %d\n", a[index], index);
    }
}
