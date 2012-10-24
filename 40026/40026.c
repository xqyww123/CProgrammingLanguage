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
        k = 0;
    	for (i = m; i <= n; i += 2)
    	{
            
            if (k == 5 )
            {
                printf("\n");
                k = 0;
            }
            for (j = 2; j <= i / 2; ++j)
                if (check_num(j) && check_num(i - j))
                {
                    printf("%d=%d+%d ", i, j, i - j);
                    break;
                }
            ++k;
    	}
    }
}