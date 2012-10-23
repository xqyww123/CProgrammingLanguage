#include "stdio.h"
#include "math.h"

int check_num(int k)
{
	int i;
	for (i = 2; i <= sqrt(k); ++i)
		if (k % i == 0) 
			return 0;
	return 1;
}
int main(void)
{
    int count, i, j, k, m, n, number;

    scanf("%d%d", &m, &n);
    
    if(m % 2 != 0) m = m + 1;
    if(m >= 6){
		/*---------*/
    	for (i = m; i <= n; i += 2)
    	{

    	}
    }
}