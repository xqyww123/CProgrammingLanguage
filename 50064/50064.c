#include <stdio.h>

int reverse(int k)
{
	int ans = 0;
	while (k != 0)
	{
		ans = ans * 10 + k % 10;
		k /= 10;
	}
	return ans;
}
int main(void)
{
    long in, res;
    int ri, repeat;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%ld", &in);
		/*---------*/
        res = reverse(in);
        printf("%ld\n", res);
    }
    return 0;
}

/*---------*/