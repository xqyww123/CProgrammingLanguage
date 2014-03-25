#include "stdio.h"
#include "math.h"

int a[20];
int top = 0;
int prime(int n);
void cal(int k)
{
	int i = 0;
	if (k == 1) return ;
	for (i = 2; i <= k; ++i)
		if (k % i == 0 && prime(i))
		{
			a[top++] = i;
			return cal(k / i);
		}
}

int main(void)
{
    int i, k, m;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        printf("%d = ", m);
		/*---------*/
		top = 0;
		cal(m);
		printf("%d", a[0]);
		for (i = 1; i < top; ++i)
			printf("*%d", a[i]);
		printf("\n");
    }
}

int prime(int k)
{
	int i;
	for (i = 2; i <= sqrt(k); ++i)
		if (k % i == 0) return 0;
	return 1; 
}