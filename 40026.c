#include "stdio.h"
#include "math.h"

const int ps[25] = {2,3,5,7,11,13,17,19,23,29,\
31,37,41,43,47,53,59,61,67,71,\
73,79,83,89,97};

int on;
void prt(int x, int a, int b)
{
	if (on == 5) on = 0, printf("\n");
	if (on) printf(" ");
	printf("%d=%d+%d", x, a, b);
	on ++;
}

int main(void)
{
    int count, i, j, k, m, n, number;

    scanf("%d%d", &m, &n);
    if(m % 2 != 0) m = m + 1;
    on = 0;
    if(m >= 6){
    	for (i = m;i<=n;++i)
	{
		if (i&1) continue;
		for (j = 0;j<25;++j)
			for (k=0;k<25;++k)
				if (ps[j] + ps[k] == i)
				{ prt(i, ps[j], ps[k]); goto nxt; }
nxt:		;
	}
    }
    	printf("\n");
	return 0;
}
