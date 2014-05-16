#include <stdio.h>
int main(void)
{
    int count, in, sum;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in < 0) in = -in;
        count = sum = 0;
        if (!in) count = 1;
        while (in) { count ++; sum += in % 10; in /= 10; }
   	printf("count = %d, sum = %d\n", count, sum);
   }
}
