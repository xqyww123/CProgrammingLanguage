#include <stdio.h>
#include <math.h>
#include <memory.h>

int a[100];
int step;

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
int main(void)
{
    int factor, m, n, number, sum;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n"); 
		for (number = m; number <= n; ++number)
		{
			int i ;
			memset(a, 0, sizeof(a));
			step = 0;
			sum = 1;
			for (i = 2; i <= sqrt(number); ++i)
			{
				if (number % i == 0)
				{
					a[step] = i;
					a[step + 1] = number / i;
					step += 2;
					sum += i + number / i;
				}
			}
			if (sum == number)
			{
				qsort(a, step, sizeof(int), cmp);
				printf("%d = 1", number);
				for (i = 0; i != step; ++i)
					printf(" + %d", a[i]);
				printf("\n");
			}
				

		}
		
    }
} 