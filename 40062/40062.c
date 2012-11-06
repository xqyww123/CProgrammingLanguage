#include <stdio.h>
#include <math.h>
double jc(int k)
{
	int i;
	double s = 1;
	for (i = 2; i <= k; ++i)
		s *= i;
	return s;
}
int main(void)
{
    int i;
    int repeat, ri;
    double item, s, x; 
    double fact(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &x);
		/*---------*/
		s = 0;
		for (i = 1; ; ++i)
		{
			item = pow(x,i) / jc(i);
			s += item;
			if (item < 0.00001)
				break;
		}
      	printf("s = %.2f\n", s);
    }
    return 0;
}


/*---------*/