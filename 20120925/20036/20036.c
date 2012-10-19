#include <stdio.h>
int main(void)
{    
    int lower, upper;
    int repeat, ri;
    double celsius, fahr;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &lower, &upper);
        printf("fahr  celsius\n");
		/*---------*/
		for ( ; lower <= upper; lower += 2)
		{
			fahr = lower;
			celsius = 5 * (fahr - 32) / 9;
			printf("%3.0f %6.1f\n", fahr, celsius);
		}
    }
}