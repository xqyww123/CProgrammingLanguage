#include <stdio.h>
int main(void)
{
    int count, in, sum;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
		/*---------*/
		count = 0, sum = 0;
		if (in == 0) ++count;
		while (in != 0)
		{
			sum += (in < 0 ? -in : in) % 10;
			in /= 10;
			++ count;
		}
   		printf("count = %d, sum = %d\n", count, sum);
   }
}