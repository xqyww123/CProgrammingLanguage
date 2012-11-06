#include <stdio.h>

void dfs(int k)
{
	if (k != 0)
		dfs(k / 10);
	else return ;
	printf("%d ", k % 10);
}
int main(void)
{
    int digit, in, power, temp;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
		/*---------*/
		in = in < 0 ? -in : in;
        dfs(in);
     	printf("\n");
   }
   return 0;
}