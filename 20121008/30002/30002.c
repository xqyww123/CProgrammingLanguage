#include <stdio.h>

int sign(int x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x == 0)
	{
		return 0;
	}
	if (x > 0)
	{
		return 1;
	}
}
int main(void)
{
    int repeat, ri;
    int x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &x);
		/*---------*/
        y = sign(x);
        printf("sign(%d) = %d\n", x, y);
    }
}
