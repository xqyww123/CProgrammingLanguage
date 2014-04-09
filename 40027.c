
#include <stdio.h>
int main(void)
{
    int digit, in, power, temp;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
	if (in < 0) in = -in;
	if (!in) { printf("0\n"); continue; }
	int base = (int)10E8, f = 0, of = 0;
	while (base )
	{
		if ((in/base)%10) f = 1;
		if (f) 
		{
			if (of) printf(" ");
			printf("%d", (in/base)%10);
			of = 1;
		}
		base /= 10;
	}
     	printf("\n");
   }
    return 0;
}
