#include <stdio.h>
int main(void)
{
    int a, i, n;
    int ri, repeat;
    long sn;
    long fn(int a, int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%ld%d", &a, &n);
	int t; t = sn = 0;
	for (i=0;i<n;++i) { t=t*10+a; sn+=t; }
/*---------*/
        printf("%ld\n", sn);
    }
}
